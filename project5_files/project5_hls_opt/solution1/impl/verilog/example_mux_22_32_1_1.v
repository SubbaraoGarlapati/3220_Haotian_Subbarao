// ==============================================================
// Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
// Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1ns/1ps

module example_mux_22_32_1_1 #(
parameter
    ID                = 0,
    NUM_STAGE         = 1,
    din0_WIDTH       = 32,
    din1_WIDTH       = 32,
    din2_WIDTH         = 32,
    dout_WIDTH            = 32
)(
    input  [31 : 0]     din0,
    input  [31 : 0]     din1,
    input  [1 : 0]    din2,
    output [31 : 0]   dout);

// puts internal signals
wire [1 : 0]     sel;
// level 1 signals
wire [31 : 0]         mux_1_0;
// level 2 signals
wire [31 : 0]         mux_2_0;

assign sel = din2;

// Generate level 1 logic
assign mux_1_0 = (sel[0] == 0)? din0 : din1;

// Generate level 2 logic
assign mux_2_0 = mux_1_0;

// output logic
assign dout = mux_2_0;

endmodule
