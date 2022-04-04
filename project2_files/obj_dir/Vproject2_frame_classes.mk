# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vproject2_frame.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vproject2_frame \
	Vproject2_frame___024root__DepSet_h1bb77ebf__0 \
	Vproject2_frame___024root__DepSet_h41676405__0 \
	Vproject2_frame_project2_frame__DepSet_h4651a795__0 \
	Vproject2_frame_project2_frame__DepSet_h0d88bb1f__0 \
	Vproject2_frame_WB_STAGE__DepSet_h9fba23b8__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vproject2_frame__ConstPool_0 \
	Vproject2_frame___024root__Slow \
	Vproject2_frame___024root__DepSet_h1bb77ebf__0__Slow \
	Vproject2_frame___024root__DepSet_h41676405__0__Slow \
	Vproject2_frame_project2_frame__Slow \
	Vproject2_frame_project2_frame__DepSet_h4651a795__0__Slow \
	Vproject2_frame_project2_frame__DepSet_h0d88bb1f__0__Slow \
	Vproject2_frame_WB_STAGE__Slow \
	Vproject2_frame_WB_STAGE__DepSet_h888ef1e2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vproject2_frame__Dpi \
	Vproject2_frame__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vproject2_frame__Syms \
	Vproject2_frame__Trace__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
