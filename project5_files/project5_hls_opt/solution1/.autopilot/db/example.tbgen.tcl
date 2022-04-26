set moduleName example
set isTopModule 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {example}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_V_data_V int 32 regular {axi_s 0 volatile  { A Data } }  }
	{ A_V_keep_V int 4 regular {axi_s 0 volatile  { A Keep } }  }
	{ A_V_strb_V int 4 regular {axi_s 0 volatile  { A Strb } }  }
	{ A_V_user_V int 2 regular {axi_s 0 volatile  { A User } }  }
	{ A_V_last_V int 1 regular {axi_s 0 volatile  { A Last } }  }
	{ A_V_id_V int 5 regular {axi_s 0 volatile  { A ID } }  }
	{ A_V_dest_V int 6 regular {axi_s 0 volatile  { A Dest } }  }
	{ B_V_data_V int 32 regular {axi_s 1 volatile  { B Data } }  }
	{ B_V_keep_V int 4 regular {axi_s 1 volatile  { B Keep } }  }
	{ B_V_strb_V int 4 regular {axi_s 1 volatile  { B Strb } }  }
	{ B_V_user_V int 2 regular {axi_s 1 volatile  { B User } }  }
	{ B_V_last_V int 1 regular {axi_s 1 volatile  { B Last } }  }
	{ B_V_id_V int 5 regular {axi_s 1 volatile  { B ID } }  }
	{ B_V_dest_V int 6 regular {axi_s 1 volatile  { B Dest } }  }
	{ ap_local_deadlock int 1 unused {axi_slave 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_user_V", "interface" : "axis", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_dest_V", "interface" : "axis", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "B_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_user_V", "interface" : "axis", "bitwidth" : 2, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_dest_V", "interface" : "axis", "bitwidth" : 6, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ap_local_deadlock", "interface" : "axi_slave", "bundle":"control","type":"ap_none","bitwidth" : 1, "direction" : "WRITEONLY", "offset" : {"out":0}, "offset_end" : {"out":4294967295}} ]}
# RTL Port declarations: 
set portNum 39
set portList { 
	{ ap_local_block sc_out sc_logic 1 signal -1 } 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ A_TDATA sc_in sc_lv 32 signal 0 } 
	{ A_TVALID sc_in sc_logic 1 invld 6 } 
	{ A_TREADY sc_out sc_logic 1 inacc 6 } 
	{ A_TKEEP sc_in sc_lv 4 signal 1 } 
	{ A_TSTRB sc_in sc_lv 4 signal 2 } 
	{ A_TUSER sc_in sc_lv 2 signal 3 } 
	{ A_TLAST sc_in sc_lv 1 signal 4 } 
	{ A_TID sc_in sc_lv 5 signal 5 } 
	{ A_TDEST sc_in sc_lv 6 signal 6 } 
	{ B_TDATA sc_out sc_lv 32 signal 7 } 
	{ B_TVALID sc_out sc_logic 1 outvld 13 } 
	{ B_TREADY sc_in sc_logic 1 outacc 13 } 
	{ B_TKEEP sc_out sc_lv 4 signal 8 } 
	{ B_TSTRB sc_out sc_lv 4 signal 9 } 
	{ B_TUSER sc_out sc_lv 2 signal 10 } 
	{ B_TLAST sc_out sc_lv 1 signal 11 } 
	{ B_TID sc_out sc_lv 5 signal 12 } 
	{ B_TDEST sc_out sc_lv 6 signal 13 } 
	{ s_axi_control_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_AWADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_control_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_ARADDR sc_in sc_lv 4 signal -1 } 
	{ s_axi_control_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_control_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_control_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_control_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_control_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_control_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "AWADDR" },"address":[{"name":"example","role":"start","value":"0","valid_bit":"0"},{"name":"example","role":"continue","value":"0","valid_bit":"4"},{"name":"example","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_control_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWVALID" } },
	{ "name": "s_axi_control_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "AWREADY" } },
	{ "name": "s_axi_control_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WVALID" } },
	{ "name": "s_axi_control_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "WREADY" } },
	{ "name": "s_axi_control_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "WDATA" } },
	{ "name": "s_axi_control_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "WSTRB" } },
	{ "name": "s_axi_control_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "control", "role": "ARADDR" },"address":[{"name":"example","role":"start","value":"0","valid_bit":"0"},{"name":"example","role":"done","value":"0","valid_bit":"1"},{"name":"example","role":"idle","value":"0","valid_bit":"2"},{"name":"example","role":"ready","value":"0","valid_bit":"3"},{"name":"example","role":"auto_start","value":"0","valid_bit":"7"},{"name":"ap_local_deadlock","role":"data","value":"0"}] },
	{ "name": "s_axi_control_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARVALID" } },
	{ "name": "s_axi_control_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "ARREADY" } },
	{ "name": "s_axi_control_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RVALID" } },
	{ "name": "s_axi_control_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "RREADY" } },
	{ "name": "s_axi_control_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "control", "role": "RDATA" } },
	{ "name": "s_axi_control_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "RRESP" } },
	{ "name": "s_axi_control_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BVALID" } },
	{ "name": "s_axi_control_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "BREADY" } },
	{ "name": "s_axi_control_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "control", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "control", "role": "interrupt" } }, 
 	{ "name": "ap_local_block", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ap_local_block", "role": "default" }} , 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "A_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V_data_V", "role": "default" }} , 
 	{ "name": "A_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "A_V_dest_V", "role": "default" }} , 
 	{ "name": "A_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "A_V_dest_V", "role": "default" }} , 
 	{ "name": "A_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V_keep_V", "role": "default" }} , 
 	{ "name": "A_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V_strb_V", "role": "default" }} , 
 	{ "name": "A_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V_user_V", "role": "default" }} , 
 	{ "name": "A_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V_last_V", "role": "default" }} , 
 	{ "name": "A_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "A_V_id_V", "role": "default" }} , 
 	{ "name": "A_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_V_dest_V", "role": "default" }} , 
 	{ "name": "B_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_V_data_V", "role": "default" }} , 
 	{ "name": "B_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "B_V_dest_V", "role": "default" }} , 
 	{ "name": "B_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "B_V_dest_V", "role": "default" }} , 
 	{ "name": "B_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_V_keep_V", "role": "default" }} , 
 	{ "name": "B_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_V_strb_V", "role": "default" }} , 
 	{ "name": "B_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "B_V_user_V", "role": "default" }} , 
 	{ "name": "B_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "B_V_last_V", "role": "default" }} , 
 	{ "name": "B_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_V_id_V", "role": "default" }} , 
 	{ "name": "B_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_V_dest_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "6", "8", "10", "67", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83"],
		"CDFG" : "example",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "A_V_data_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_data_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_keep_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_keep_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_strb_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_strb_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_user_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_user_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_last_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_last_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_id_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_id_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "A_V_dest_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Port" : "A_V_dest_V", "Inst_start_state" : "3", "Inst_end_state" : "4"}]},
			{"Name" : "B_V_data_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_data_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_keep_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_keep_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_strb_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_strb_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_user_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_user_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_last_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_last_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_id_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_id_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "B_V_dest_V", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Port" : "B_V_dest_V", "Inst_start_state" : "12", "Inst_end_state" : "13"}]},
			{"Name" : "ap_local_deadlock", "Type" : "None", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_in_buffer_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.local_out_buffer_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.kernel_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_KENEL_INIT_fu_197", "Parent" : "0", "Child" : ["5"],
		"CDFG" : "example_Pipeline_KENEL_INIT",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "11", "EstimateLatencyMax" : "11",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "KENEL_INIT", "PipelineType" : "NotSupport"}]},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_KENEL_INIT_fu_197.flow_control_loop_pipe_sequential_init_U", "Parent" : "4"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_RECEIVING_INPUT_fu_203", "Parent" : "0", "Child" : ["7"],
		"CDFG" : "example_Pipeline_RECEIVING_INPUT",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "A_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "A_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "A_V_keep_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "A_V_strb_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "A_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "A_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "A_V_id_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "A_V_dest_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "kernel", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "local_in_buffer", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ii_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "tmp_keep_V_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "tmp_strb_V_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "tmp_user_V_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "tmp_id_V_out", "Type" : "Vld", "Direction" : "O"},
			{"Name" : "tmp_dest_V_out", "Type" : "Vld", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "RECEIVING_INPUT", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_RECEIVING_INPUT_fu_203.flow_control_loop_pipe_sequential_init_U", "Parent" : "6"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_Clear_dst_fu_229", "Parent" : "0", "Child" : ["9"],
		"CDFG" : "example_Pipeline_Clear_dst",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "902", "EstimateLatencyMax" : "902",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_out_buffer", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "Clear_dst", "PipelineType" : "NotSupport"}]},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_Clear_dst_fu_229.flow_control_loop_pipe_sequential_init_U", "Parent" : "8"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66"],
		"CDFG" : "example_Pipeline_convR",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "459", "EstimateLatencyMax" : "459",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_in_buffer", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "kernel_load_8", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_1", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_7", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_2", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_3", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_6", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_4", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_load_5", "Type" : "None", "Direction" : "I"},
			{"Name" : "local_out_buffer", "Type" : "Memory", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "convR", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "15", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter0", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage7", "LastStateIter" : "ap_enable_reg_pp0_iter1", "LastStateBlock" : "ap_block_pp0_stage7_subdone", "QuitState" : "ap_ST_fsm_pp0_stage7", "QuitStateIter" : "ap_enable_reg_pp0_iter1", "QuitStateBlock" : "ap_block_pp0_stage7_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U18", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U19", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U20", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U21", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U22", "Parent" : "10"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U23", "Parent" : "10"},
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U24", "Parent" : "10"},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U25", "Parent" : "10"},
	{"ID" : "19", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U26", "Parent" : "10"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U27", "Parent" : "10"},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U28", "Parent" : "10"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U29", "Parent" : "10"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U30", "Parent" : "10"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U31", "Parent" : "10"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U32", "Parent" : "10"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U33", "Parent" : "10"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U34", "Parent" : "10"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U35", "Parent" : "10"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U36", "Parent" : "10"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U37", "Parent" : "10"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U38", "Parent" : "10"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U39", "Parent" : "10"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U40", "Parent" : "10"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U41", "Parent" : "10"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U42", "Parent" : "10"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U43", "Parent" : "10"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U44", "Parent" : "10"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U45", "Parent" : "10"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U46", "Parent" : "10"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U47", "Parent" : "10"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U48", "Parent" : "10"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U49", "Parent" : "10"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U50", "Parent" : "10"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U51", "Parent" : "10"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U52", "Parent" : "10"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U53", "Parent" : "10"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U54", "Parent" : "10"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U55", "Parent" : "10"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U56", "Parent" : "10"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U57", "Parent" : "10"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U58", "Parent" : "10"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U59", "Parent" : "10"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U60", "Parent" : "10"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U61", "Parent" : "10"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U62", "Parent" : "10"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U63", "Parent" : "10"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U64", "Parent" : "10"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U65", "Parent" : "10"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U66", "Parent" : "10"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U67", "Parent" : "10"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U68", "Parent" : "10"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U69", "Parent" : "10"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U70", "Parent" : "10"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U71", "Parent" : "10"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.mul_32s_32s_32_2_1_U72", "Parent" : "10"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_convR_fu_234.flow_control_loop_pipe_sequential_init_U", "Parent" : "10"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_SENDING_OUTPUT_fu_251", "Parent" : "0", "Child" : ["68"],
		"CDFG" : "example_Pipeline_SENDING_OUTPUT",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1", "real_start" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"IsBlackBox" : "0",
		"Port" : [
			{"Name" : "local_out_buffer", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "zext_ln260", "Type" : "None", "Direction" : "I"},
			{"Name" : "tmp_keep_V_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "tmp_strb_V_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "tmp_user_V_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "tmp_id_V_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "tmp_dest_V_reload", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "B_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "B_V_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "B_V_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "B_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "B_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "B_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "B_V_dest_V", "Type" : "Axis", "Direction" : "O"}],
		"Loop" : [
			{"Name" : "SENDING_OUTPUT", "PipelineType" : "UPC",
				"LoopDec" : {"FSMBitwidth" : "1", "FirstState" : "ap_ST_fsm_pp0_stage0", "FirstStateIter" : "ap_enable_reg_pp0_iter1", "FirstStateBlock" : "ap_block_pp0_stage0_subdone", "LastState" : "ap_ST_fsm_pp0_stage0", "LastStateIter" : "ap_enable_reg_pp0_iter2", "LastStateBlock" : "ap_block_pp0_stage0_subdone", "QuitState" : "ap_ST_fsm_pp0_stage0", "QuitStateIter" : "ap_enable_reg_pp0_iter2", "QuitStateBlock" : "ap_block_pp0_stage0_subdone", "OneDepthLoop" : "0", "has_ap_ctrl" : "1", "has_continue" : "0"}}]},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_example_Pipeline_SENDING_OUTPUT_fu_251.flow_control_loop_pipe_sequential_init_U", "Parent" : "67"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.control_s_axi_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_data_V_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_keep_V_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_strb_V_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_user_V_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_last_V_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_id_V_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_A_V_dest_V_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_data_V_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_keep_V_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_strb_V_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_user_V_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_last_V_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_id_V_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.regslice_both_B_V_dest_V_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	example {
		A_V_data_V {Type I LastRead 1 FirstWrite -1}
		A_V_keep_V {Type I LastRead 1 FirstWrite -1}
		A_V_strb_V {Type I LastRead 1 FirstWrite -1}
		A_V_user_V {Type I LastRead 1 FirstWrite -1}
		A_V_last_V {Type I LastRead 1 FirstWrite -1}
		A_V_id_V {Type I LastRead 1 FirstWrite -1}
		A_V_dest_V {Type I LastRead 1 FirstWrite -1}
		B_V_data_V {Type O LastRead -1 FirstWrite 2}
		B_V_keep_V {Type O LastRead -1 FirstWrite 2}
		B_V_strb_V {Type O LastRead -1 FirstWrite 2}
		B_V_user_V {Type O LastRead -1 FirstWrite 2}
		B_V_last_V {Type O LastRead -1 FirstWrite 2}
		B_V_id_V {Type O LastRead -1 FirstWrite 2}
		B_V_dest_V {Type O LastRead -1 FirstWrite 2}
		ap_local_deadlock {Type O LastRead -1 FirstWrite -1}}
	example_Pipeline_KENEL_INIT {
		kernel {Type O LastRead -1 FirstWrite 0}}
	example_Pipeline_RECEIVING_INPUT {
		A_V_data_V {Type I LastRead 1 FirstWrite -1}
		A_V_keep_V {Type I LastRead 1 FirstWrite -1}
		A_V_strb_V {Type I LastRead 1 FirstWrite -1}
		A_V_user_V {Type I LastRead 1 FirstWrite -1}
		A_V_last_V {Type I LastRead 1 FirstWrite -1}
		A_V_id_V {Type I LastRead 1 FirstWrite -1}
		A_V_dest_V {Type I LastRead 1 FirstWrite -1}
		kernel {Type O LastRead -1 FirstWrite 1}
		local_in_buffer {Type O LastRead -1 FirstWrite 1}
		ii_out {Type O LastRead -1 FirstWrite 1}
		tmp_keep_V_out {Type O LastRead -1 FirstWrite 1}
		tmp_strb_V_out {Type O LastRead -1 FirstWrite 1}
		tmp_user_V_out {Type O LastRead -1 FirstWrite 1}
		tmp_id_V_out {Type O LastRead -1 FirstWrite 1}
		tmp_dest_V_out {Type O LastRead -1 FirstWrite 1}}
	example_Pipeline_Clear_dst {
		local_out_buffer {Type O LastRead -1 FirstWrite 0}}
	example_Pipeline_convR {
		local_in_buffer {Type I LastRead 15 FirstWrite -1}
		kernel_load_8 {Type I LastRead 0 FirstWrite -1}
		kernel_load {Type I LastRead 0 FirstWrite -1}
		kernel_load_1 {Type I LastRead 0 FirstWrite -1}
		kernel_load_7 {Type I LastRead 0 FirstWrite -1}
		kernel_load_2 {Type I LastRead 0 FirstWrite -1}
		kernel_load_3 {Type I LastRead 0 FirstWrite -1}
		kernel_load_6 {Type I LastRead 0 FirstWrite -1}
		kernel_load_4 {Type I LastRead 0 FirstWrite -1}
		kernel_load_5 {Type I LastRead 0 FirstWrite -1}
		local_out_buffer {Type O LastRead -1 FirstWrite 8}}
	example_Pipeline_SENDING_OUTPUT {
		local_out_buffer {Type I LastRead 1 FirstWrite -1}
		zext_ln260 {Type I LastRead 0 FirstWrite -1}
		tmp_keep_V_reload {Type I LastRead 0 FirstWrite -1}
		tmp_strb_V_reload {Type I LastRead 0 FirstWrite -1}
		tmp_user_V_reload {Type I LastRead 0 FirstWrite -1}
		tmp_id_V_reload {Type I LastRead 0 FirstWrite -1}
		tmp_dest_V_reload {Type I LastRead 0 FirstWrite -1}
		B_V_data_V {Type O LastRead -1 FirstWrite 2}
		B_V_keep_V {Type O LastRead -1 FirstWrite 2}
		B_V_strb_V {Type O LastRead -1 FirstWrite 2}
		B_V_user_V {Type O LastRead -1 FirstWrite 2}
		B_V_last_V {Type O LastRead -1 FirstWrite 2}
		B_V_id_V {Type O LastRead -1 FirstWrite 2}
		B_V_dest_V {Type O LastRead -1 FirstWrite 2}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	A_V_data_V { axis {  { A_TDATA in_data 0 32 } } }
	A_V_keep_V { axis {  { A_TKEEP in_data 0 4 } } }
	A_V_strb_V { axis {  { A_TSTRB in_data 0 4 } } }
	A_V_user_V { axis {  { A_TUSER in_data 0 2 } } }
	A_V_last_V { axis {  { A_TLAST in_data 0 1 } } }
	A_V_id_V { axis {  { A_TID in_data 0 5 } } }
	A_V_dest_V { axis {  { A_TVALID in_vld 0 1 }  { A_TREADY in_acc 1 1 }  { A_TDEST in_data 0 6 } } }
	B_V_data_V { axis {  { B_TDATA out_data 1 32 } } }
	B_V_keep_V { axis {  { B_TKEEP out_data 1 4 } } }
	B_V_strb_V { axis {  { B_TSTRB out_data 1 4 } } }
	B_V_user_V { axis {  { B_TUSER out_data 1 2 } } }
	B_V_last_V { axis {  { B_TLAST out_data 1 1 } } }
	B_V_id_V { axis {  { B_TID out_data 1 5 } } }
	B_V_dest_V { axis {  { B_TVALID out_vld 1 1 }  { B_TREADY out_acc 0 1 }  { B_TDEST out_data 1 6 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
