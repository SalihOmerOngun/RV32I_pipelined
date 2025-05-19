// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb__DOT__clk;
        CData/*0:0*/ tb__DOT__update;
        CData/*0:0*/ tb__DOT__rstn;
        CData/*0:0*/ tb__DOT__stall_f_d;
        CData/*0:0*/ tb__DOT__stall_excte;
        CData/*0:0*/ tb__DOT__stall_mem;
        CData/*0:0*/ tb__DOT__stall_wb;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__jump_ok_excte;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__reg_file_en_excte;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__mem_en_excte;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__reg_file_en_memory;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__mem_en_memory;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__shamt;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__sel;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__shamt_data;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__forw_mem_rs1_en;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__forw_mem_rs2_en;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__hazard_rs1;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__hazard_rs2;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__stall_en;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en;
        CData/*0:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en;
        CData/*4:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
        CData/*7:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val8;
        CData/*3:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val4;
        CData/*1:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__i_core_model__DOT__stall_en__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__val16;
        IData/*31:0*/ tb__DOT__addr;
        IData/*31:0*/ tb__DOT__data;
        IData/*31:0*/ tb__DOT__file_pointer;
        IData/*31:0*/ tb__DOT__pipe_pc;
        IData/*31:0*/ tb__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_fetch;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_fetch;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_decode;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_decode;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_out_alu;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_data_excte;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_excte;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_excte;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_out_excte;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_data_adres_memory;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_out_memory;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__pc_memory;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_memory;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__rs1;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__rs2;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__instr_mem_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__number1;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__number2;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__load_adres;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__load_mem_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__load_mem_data_hazard;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__rs1_hazard;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__rs2_hazard;
    };
    struct {
        IData/*31:0*/ tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__dec_inst__DOT__instr;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__alu_inst__DOT__i;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o;
        IData/*31:0*/ tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb__DOT__i_core_model__DOT__reg_file_write_back;
        VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__fetch_inst__DOT__instr_mem;
        VlUnpacked<IData/*31:0*/, 2048> tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem;
        VlUnpacked<IData/*31:0*/, 32> tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 2048>, true, IData/*31:0*/, 1> __VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd98da3bc__0;
    VlTriggerScheduler __VtrigSched_h95cd0708__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
