 `include "VX_define.vh" 


module FE_STAGE(
  input clk,
  input reset,
  input [`from_DE_to_FE_WIDTH-1:0] from_DE_to_FE,
  input [`from_AGEX_to_FE_WIDTH-1:0] from_AGEX_to_FE,   
  input [`from_MEM_to_FE_WIDTH-1:0] from_MEM_to_FE,   
  input [`from_WB_to_FE_WIDTH-1:0] from_WB_to_FE, 
  output[`FE_latch_WIDTH-1:0] FE_latch_out,
  output [`from_FE_to_AGEX_WIDTH-1:0] from_FE_to_AGEX
);


  // I-MEM
  (* ram_init_file = `IDMEMINITFILE *)
  reg [`DBITS-1:0] imem [`IMEMWORDS-1:0];
 
  initial begin
      $readmemh(`IDMEMINITFILE , imem);
  end

  // Display memory contents with verilator 
  /*
  always @(posedge clk) begin
    for (integer i=0 ; i<`IMEMWORDS ; i=i+1) begin
        $display("%h", imem[i]);
    end
  end
  */

  /* pipeline latch */ 
  reg [`FE_latch_WIDTH-1:0] FE_latch;  // FE latch 

  reg [`DBITS-1:0] PC_FE_latch; // PC latch in the FE stage   // you could use a part of FE_latch as a PC latch as well 
  
  wire [`INSTBITS-1:0] inst_FE;  // instruction value in the FE stage 
  wire [`DBITS-1:0] pcplus_FE;  // pc plus value in the FE stage 
  wire stall_pipe_FE; // signal to indicate when a front-end needs to be stall
  
  wire [`FE_latch_WIDTH-1:0] FE_latch_contents;  // the signals that will be FE latch contents 
  
  // reading instruction from imem 
  assign inst_FE = imem[PC_FE_latch[`IMEMADDRBITS-1:`IMEMWORDBITS]];  // this code works. imem is stored 4B together 
  
  // wire to send the FE latch contents to the DE stage 
  assign FE_latch_out = FE_latch; 

  reg [`DBITS-1:0] inst_count_FE; /* for debugging purpose */ 
  
  wire [`DBITS-1:0] inst_count_AGEX; /* for debugging purpose. resent the instruction counter */ 

  // This is the value of "incremented PC", computed in the FE stage
  assign pcplus_FE = PC_FE_latch + `INSTSIZE;
  
   
   // the order of latch contents should be matched in the decode stage when we extract the contents. 
  assign FE_latch_contents = {
                                inst_FE, 
                                PC_FE_latch, 
                                pcplus_FE, // please feel free to add more signals such as valid bits etc. 
                                inst_count_FE, 
                                // if you add more bits here, please increase the width of latch in VX_define.vh 
                                `BUS_CANARY_VALUE // for an error checking of bus encoding/decoding  
                                };




  // **TODO: Complete the rest of the pipeline 
   //assign stall_pipe_FE = 0;  // you need to modify this line for your design 
  //BRANCH LOGIC
  wire br_cond_AGEX_in_FE;
  wire [`DBITS-1:0] newpc_AGEX;

  wire [`PTINDEXBITS-1:0] memaddr_pt_FE;
  wire [`BTBINDEXBITS-1:0] memaddr_btb_FE;
  
  assign from_FE_to_AGEX = {memaddr_pt_FE, memaddr_btb_FE};

  assign {br_cond_AGEX_in_FE, newpc_AGEX, rd_val_bhr_FE, rd_val_pt_FE, rd_val_btb_FE} = from_AGEX_to_FE;

  wire [`BHRENTRYBITS-1:0] rd_val_bhr_FE;
  wire [`PTENTRYBITS-1:0] rd_val_pt_FE;
  wire [`BTBENTRYBITS-1:0] rd_val_btb_FE;



  assign stall_pipe_FE = from_DE_to_FE;

  always @ (posedge clk or posedge reset) begin
  /* you need to extend this always block */
   if(reset) begin 
      PC_FE_latch <= `STARTPC;
      inst_count_FE <= 1;  /* inst_count starts from 1 for easy human reading. 1st fetch instructions can have 1 */ 
      end 
     else if (br_cond_AGEX_in_FE) begin
       PC_FE_latch <= newpc_AGEX;
       inst_count_FE <= inst_count_FE + 1;
     end
     else if(!stall_pipe_FE) begin 
      PC_FE_latch <= pcplus_FE;
      inst_count_FE <= inst_count_FE + 1; 
      end 
    else 
      PC_FE_latch <= PC_FE_latch;
  end
  

  always @ (posedge clk or posedge reset) begin
    if(reset) 
        begin 
            FE_latch <= {`FE_latch_WIDTH{1'b0}}; 
            // ...
        end 
     else  
        begin 
         // this is just an example. you need to expand the contents of if/else
          if (br_cond_AGEX_in_FE)
            FE_latch <= {`FE_latch_WIDTH{1'b0}};
          else if  (stall_pipe_FE)
            FE_latch <= FE_latch; 
          else 
            FE_latch <= FE_latch_contents; 
        end  
  end

endmodule