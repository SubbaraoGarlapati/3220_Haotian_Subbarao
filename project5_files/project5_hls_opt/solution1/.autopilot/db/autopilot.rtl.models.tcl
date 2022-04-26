set SynModuleInfo {
  {SRCNAME example_Pipeline_KENEL_INIT MODELNAME example_Pipeline_KENEL_INIT RTLNAME example_example_Pipeline_KENEL_INIT
    SUBMODULES {
      {MODELNAME example_flow_control_loop_pipe_sequential_init RTLNAME example_flow_control_loop_pipe_sequential_init BINDTYPE interface TYPE internal_upc_flow_control INSTNAME example_flow_control_loop_pipe_sequential_init_U}
    }
  }
  {SRCNAME example_Pipeline_RECEIVING_INPUT MODELNAME example_Pipeline_RECEIVING_INPUT RTLNAME example_example_Pipeline_RECEIVING_INPUT}
  {SRCNAME example_Pipeline_Clear_dst MODELNAME example_Pipeline_Clear_dst RTLNAME example_example_Pipeline_Clear_dst}
  {SRCNAME example_Pipeline_convR MODELNAME example_Pipeline_convR RTLNAME example_example_Pipeline_convR
    SUBMODULES {
      {MODELNAME example_mul_32s_32s_32_2_1 RTLNAME example_mul_32s_32s_32_2_1 BINDTYPE op TYPE mul IMPL auto LATENCY 1 ALLOW_PRAGMA 1}
    }
  }
  {SRCNAME example_Pipeline_SENDING_OUTPUT MODELNAME example_Pipeline_SENDING_OUTPUT RTLNAME example_example_Pipeline_SENDING_OUTPUT}
  {SRCNAME example MODELNAME example RTLNAME example IS_TOP 1
    SUBMODULES {
      {MODELNAME example_local_in_buffer_RAM_1WNR_AUTO_1R1W RTLNAME example_local_in_buffer_RAM_1WNR_AUTO_1R1W BINDTYPE storage TYPE ram_1wnr IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME example_local_out_buffer_RAM_AUTO_1R1W RTLNAME example_local_out_buffer_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME example_kernel_RAM_AUTO_1R1W RTLNAME example_kernel_RAM_AUTO_1R1W BINDTYPE storage TYPE ram IMPL auto LATENCY 2 ALLOW_PRAGMA 1}
      {MODELNAME example_control_s_axi RTLNAME example_control_s_axi BINDTYPE interface TYPE interface_s_axilite}
      {MODELNAME example_regslice_both RTLNAME example_regslice_both BINDTYPE interface TYPE interface_regslice INSTNAME example_regslice_both_U}
    }
  }
}
