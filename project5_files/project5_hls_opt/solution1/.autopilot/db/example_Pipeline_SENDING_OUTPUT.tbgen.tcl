set moduleName example_Pipeline_SENDING_OUTPUT
set isTopModule 0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 1
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {example_Pipeline_SENDING_OUTPUT}
set C_modelType { void 0 }
set C_modelArgList {
	{ local_out_buffer int 32 regular {array 16000 { 1 3 } 1 1 }  }
	{ zext_ln260 int 32 regular  }
	{ tmp_keep_V_reload int 4 regular  }
	{ tmp_strb_V_reload int 4 regular  }
	{ tmp_user_V_reload int 2 regular  }
	{ tmp_id_V_reload int 5 regular  }
	{ tmp_dest_V_reload int 6 regular  }
	{ B_V_data_V int 32 regular {axi_s 1 volatile  { B Data } }  }
	{ B_V_keep_V int 4 regular {axi_s 1 volatile  { B Keep } }  }
	{ B_V_strb_V int 4 regular {axi_s 1 volatile  { B Strb } }  }
	{ B_V_user_V int 2 regular {axi_s 1 volatile  { B User } }  }
	{ B_V_last_V int 1 regular {axi_s 1 volatile  { B Last } }  }
	{ B_V_id_V int 5 regular {axi_s 1 volatile  { B ID } }  }
	{ B_V_dest_V int 6 regular {axi_s 1 volatile  { B Dest } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "local_out_buffer", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "zext_ln260", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "tmp_keep_V_reload", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "tmp_strb_V_reload", "interface" : "wire", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "tmp_user_V_reload", "interface" : "wire", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "tmp_id_V_reload", "interface" : "wire", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "tmp_dest_V_reload", "interface" : "wire", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "B_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_user_V", "interface" : "axis", "bitwidth" : 2, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "B_V_dest_V", "interface" : "axis", "bitwidth" : 6, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 24
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ B_TREADY sc_in sc_logic 1 outacc 7 } 
	{ local_out_buffer_address0 sc_out sc_lv 14 signal 0 } 
	{ local_out_buffer_ce0 sc_out sc_logic 1 signal 0 } 
	{ local_out_buffer_q0 sc_in sc_lv 32 signal 0 } 
	{ zext_ln260 sc_in sc_lv 32 signal 1 } 
	{ tmp_keep_V_reload sc_in sc_lv 4 signal 2 } 
	{ tmp_strb_V_reload sc_in sc_lv 4 signal 3 } 
	{ tmp_user_V_reload sc_in sc_lv 2 signal 4 } 
	{ tmp_id_V_reload sc_in sc_lv 5 signal 5 } 
	{ tmp_dest_V_reload sc_in sc_lv 6 signal 6 } 
	{ B_TDATA sc_out sc_lv 32 signal 7 } 
	{ B_TVALID sc_out sc_logic 1 outvld 13 } 
	{ B_TKEEP sc_out sc_lv 4 signal 8 } 
	{ B_TSTRB sc_out sc_lv 4 signal 9 } 
	{ B_TUSER sc_out sc_lv 2 signal 10 } 
	{ B_TLAST sc_out sc_lv 1 signal 11 } 
	{ B_TID sc_out sc_lv 5 signal 12 } 
	{ B_TDEST sc_out sc_lv 6 signal 13 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "B_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "B_V_data_V", "role": "default" }} , 
 	{ "name": "local_out_buffer_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "local_out_buffer", "role": "address0" }} , 
 	{ "name": "local_out_buffer_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_out_buffer", "role": "ce0" }} , 
 	{ "name": "local_out_buffer_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "local_out_buffer", "role": "q0" }} , 
 	{ "name": "zext_ln260", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "zext_ln260", "role": "default" }} , 
 	{ "name": "tmp_keep_V_reload", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "tmp_keep_V_reload", "role": "default" }} , 
 	{ "name": "tmp_strb_V_reload", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "tmp_strb_V_reload", "role": "default" }} , 
 	{ "name": "tmp_user_V_reload", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "tmp_user_V_reload", "role": "default" }} , 
 	{ "name": "tmp_id_V_reload", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "tmp_id_V_reload", "role": "default" }} , 
 	{ "name": "tmp_dest_V_reload", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "tmp_dest_V_reload", "role": "default" }} , 
 	{ "name": "B_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_V_data_V", "role": "default" }} , 
 	{ "name": "B_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "B_V_dest_V", "role": "default" }} , 
 	{ "name": "B_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_V_keep_V", "role": "default" }} , 
 	{ "name": "B_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "B_V_strb_V", "role": "default" }} , 
 	{ "name": "B_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "B_V_user_V", "role": "default" }} , 
 	{ "name": "B_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "B_V_last_V", "role": "default" }} , 
 	{ "name": "B_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "B_V_id_V", "role": "default" }} , 
 	{ "name": "B_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "B_V_dest_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	local_out_buffer { ap_memory {  { local_out_buffer_address0 mem_address 1 14 }  { local_out_buffer_ce0 mem_ce 1 1 }  { local_out_buffer_q0 in_data 0 32 } } }
	zext_ln260 { ap_none {  { zext_ln260 in_data 0 32 } } }
	tmp_keep_V_reload { ap_none {  { tmp_keep_V_reload in_data 0 4 } } }
	tmp_strb_V_reload { ap_none {  { tmp_strb_V_reload in_data 0 4 } } }
	tmp_user_V_reload { ap_none {  { tmp_user_V_reload in_data 0 2 } } }
	tmp_id_V_reload { ap_none {  { tmp_id_V_reload in_data 0 5 } } }
	tmp_dest_V_reload { ap_none {  { tmp_dest_V_reload in_data 0 6 } } }
	B_V_data_V { axis {  { B_TREADY out_acc 0 1 }  { B_TDATA out_data 1 32 } } }
	B_V_keep_V { axis {  { B_TKEEP out_data 1 4 } } }
	B_V_strb_V { axis {  { B_TSTRB out_data 1 4 } } }
	B_V_user_V { axis {  { B_TUSER out_data 1 2 } } }
	B_V_last_V { axis {  { B_TLAST out_data 1 1 } } }
	B_V_id_V { axis {  { B_TID out_data 1 5 } } }
	B_V_dest_V { axis {  { B_TVALID out_vld 1 1 }  { B_TDEST out_data 1 6 } } }
}
