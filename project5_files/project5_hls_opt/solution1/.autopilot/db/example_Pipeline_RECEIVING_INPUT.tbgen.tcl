set moduleName example_Pipeline_RECEIVING_INPUT
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
set C_modelName {example_Pipeline_RECEIVING_INPUT}
set C_modelType { void 0 }
set C_modelArgList {
	{ A_V_data_V int 32 regular {axi_s 0 volatile  { A Data } }  }
	{ A_V_keep_V int 4 regular {axi_s 0 volatile  { A Keep } }  }
	{ A_V_strb_V int 4 regular {axi_s 0 volatile  { A Strb } }  }
	{ A_V_user_V int 2 regular {axi_s 0 volatile  { A User } }  }
	{ A_V_last_V int 1 regular {axi_s 0 volatile  { A Last } }  }
	{ A_V_id_V int 5 regular {axi_s 0 volatile  { A ID } }  }
	{ A_V_dest_V int 6 regular {axi_s 0 volatile  { A Dest } }  }
	{ kernel int 32 regular {array 9 { 0 3 } 0 1 }  }
	{ local_in_buffer int 32 regular {array 16000 { 0 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 } 0 1 }  }
	{ ii_out int 32 regular {pointer 1}  }
	{ tmp_keep_V_out int 4 regular {pointer 1}  }
	{ tmp_strb_V_out int 4 regular {pointer 1}  }
	{ tmp_user_V_out int 2 regular {pointer 1}  }
	{ tmp_id_V_out int 5 regular {pointer 1}  }
	{ tmp_dest_V_out int 6 regular {pointer 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "A_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_keep_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_strb_V", "interface" : "axis", "bitwidth" : 4, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_user_V", "interface" : "axis", "bitwidth" : 2, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_id_V", "interface" : "axis", "bitwidth" : 5, "direction" : "READONLY"} , 
 	{ "Name" : "A_V_dest_V", "interface" : "axis", "bitwidth" : 6, "direction" : "READONLY"} , 
 	{ "Name" : "kernel", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "local_in_buffer", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ii_out", "interface" : "wire", "bitwidth" : 32, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tmp_keep_V_out", "interface" : "wire", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tmp_strb_V_out", "interface" : "wire", "bitwidth" : 4, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tmp_user_V_out", "interface" : "wire", "bitwidth" : 2, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tmp_id_V_out", "interface" : "wire", "bitwidth" : 5, "direction" : "WRITEONLY"} , 
 	{ "Name" : "tmp_dest_V_out", "interface" : "wire", "bitwidth" : 6, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ A_TVALID sc_in sc_logic 1 invld 0 } 
	{ A_TDATA sc_in sc_lv 32 signal 0 } 
	{ A_TREADY sc_out sc_logic 1 inacc 6 } 
	{ A_TKEEP sc_in sc_lv 4 signal 1 } 
	{ A_TSTRB sc_in sc_lv 4 signal 2 } 
	{ A_TUSER sc_in sc_lv 2 signal 3 } 
	{ A_TLAST sc_in sc_lv 1 signal 4 } 
	{ A_TID sc_in sc_lv 5 signal 5 } 
	{ A_TDEST sc_in sc_lv 6 signal 6 } 
	{ kernel_address0 sc_out sc_lv 4 signal 7 } 
	{ kernel_ce0 sc_out sc_logic 1 signal 7 } 
	{ kernel_we0 sc_out sc_logic 1 signal 7 } 
	{ kernel_d0 sc_out sc_lv 32 signal 7 } 
	{ local_in_buffer_address0 sc_out sc_lv 14 signal 8 } 
	{ local_in_buffer_ce0 sc_out sc_logic 1 signal 8 } 
	{ local_in_buffer_we0 sc_out sc_logic 1 signal 8 } 
	{ local_in_buffer_d0 sc_out sc_lv 32 signal 8 } 
	{ ii_out sc_out sc_lv 32 signal 9 } 
	{ ii_out_ap_vld sc_out sc_logic 1 outvld 9 } 
	{ tmp_keep_V_out sc_out sc_lv 4 signal 10 } 
	{ tmp_keep_V_out_ap_vld sc_out sc_logic 1 outvld 10 } 
	{ tmp_strb_V_out sc_out sc_lv 4 signal 11 } 
	{ tmp_strb_V_out_ap_vld sc_out sc_logic 1 outvld 11 } 
	{ tmp_user_V_out sc_out sc_lv 2 signal 12 } 
	{ tmp_user_V_out_ap_vld sc_out sc_logic 1 outvld 12 } 
	{ tmp_id_V_out sc_out sc_lv 5 signal 13 } 
	{ tmp_id_V_out_ap_vld sc_out sc_logic 1 outvld 13 } 
	{ tmp_dest_V_out sc_out sc_lv 6 signal 14 } 
	{ tmp_dest_V_out_ap_vld sc_out sc_logic 1 outvld 14 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "A_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "A_V_data_V", "role": "default" }} , 
 	{ "name": "A_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_V_data_V", "role": "default" }} , 
 	{ "name": "A_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "A_V_dest_V", "role": "default" }} , 
 	{ "name": "A_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V_keep_V", "role": "default" }} , 
 	{ "name": "A_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "A_V_strb_V", "role": "default" }} , 
 	{ "name": "A_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "A_V_user_V", "role": "default" }} , 
 	{ "name": "A_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "A_V_last_V", "role": "default" }} , 
 	{ "name": "A_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "A_V_id_V", "role": "default" }} , 
 	{ "name": "A_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "A_V_dest_V", "role": "default" }} , 
 	{ "name": "kernel_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "kernel", "role": "address0" }} , 
 	{ "name": "kernel_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "ce0" }} , 
 	{ "name": "kernel_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel", "role": "we0" }} , 
 	{ "name": "kernel_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel", "role": "d0" }} , 
 	{ "name": "local_in_buffer_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "local_in_buffer", "role": "address0" }} , 
 	{ "name": "local_in_buffer_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_in_buffer", "role": "ce0" }} , 
 	{ "name": "local_in_buffer_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "local_in_buffer", "role": "we0" }} , 
 	{ "name": "local_in_buffer_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "local_in_buffer", "role": "d0" }} , 
 	{ "name": "ii_out", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ii_out", "role": "default" }} , 
 	{ "name": "ii_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "ii_out", "role": "ap_vld" }} , 
 	{ "name": "tmp_keep_V_out", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "tmp_keep_V_out", "role": "default" }} , 
 	{ "name": "tmp_keep_V_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "tmp_keep_V_out", "role": "ap_vld" }} , 
 	{ "name": "tmp_strb_V_out", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "tmp_strb_V_out", "role": "default" }} , 
 	{ "name": "tmp_strb_V_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "tmp_strb_V_out", "role": "ap_vld" }} , 
 	{ "name": "tmp_user_V_out", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "tmp_user_V_out", "role": "default" }} , 
 	{ "name": "tmp_user_V_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "tmp_user_V_out", "role": "ap_vld" }} , 
 	{ "name": "tmp_id_V_out", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "tmp_id_V_out", "role": "default" }} , 
 	{ "name": "tmp_id_V_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "tmp_id_V_out", "role": "ap_vld" }} , 
 	{ "name": "tmp_dest_V_out", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "tmp_dest_V_out", "role": "default" }} , 
 	{ "name": "tmp_dest_V_out_ap_vld", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "tmp_dest_V_out", "role": "ap_vld" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.flow_control_loop_pipe_sequential_init_U", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		tmp_dest_V_out {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	A_V_data_V { axis {  { A_TVALID in_vld 0 1 }  { A_TDATA in_data 0 32 } } }
	A_V_keep_V { axis {  { A_TKEEP in_data 0 4 } } }
	A_V_strb_V { axis {  { A_TSTRB in_data 0 4 } } }
	A_V_user_V { axis {  { A_TUSER in_data 0 2 } } }
	A_V_last_V { axis {  { A_TLAST in_data 0 1 } } }
	A_V_id_V { axis {  { A_TID in_data 0 5 } } }
	A_V_dest_V { axis {  { A_TREADY in_acc 1 1 }  { A_TDEST in_data 0 6 } } }
	kernel { ap_memory {  { kernel_address0 mem_address 1 4 }  { kernel_ce0 mem_ce 1 1 }  { kernel_we0 mem_we 1 1 }  { kernel_d0 mem_din 1 32 } } }
	local_in_buffer { ap_memory {  { local_in_buffer_address0 mem_address 1 14 }  { local_in_buffer_ce0 mem_ce 1 1 }  { local_in_buffer_we0 mem_we 1 1 }  { local_in_buffer_d0 mem_din 1 32 } } }
	ii_out { ap_vld {  { ii_out out_data 1 32 }  { ii_out_ap_vld out_vld 1 1 } } }
	tmp_keep_V_out { ap_vld {  { tmp_keep_V_out out_data 1 4 }  { tmp_keep_V_out_ap_vld out_vld 1 1 } } }
	tmp_strb_V_out { ap_vld {  { tmp_strb_V_out out_data 1 4 }  { tmp_strb_V_out_ap_vld out_vld 1 1 } } }
	tmp_user_V_out { ap_vld {  { tmp_user_V_out out_data 1 2 }  { tmp_user_V_out_ap_vld out_vld 1 1 } } }
	tmp_id_V_out { ap_vld {  { tmp_id_V_out out_data 1 5 }  { tmp_id_V_out_ap_vld out_vld 1 1 } } }
	tmp_dest_V_out { ap_vld {  { tmp_dest_V_out out_data 1 6 }  { tmp_dest_V_out_ap_vld out_vld 1 1 } } }
}
