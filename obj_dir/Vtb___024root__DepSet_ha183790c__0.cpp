// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__3(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__4(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__i_core_model__DOT__stall_en__0 
        = vlSelfRef.tb__DOT__i_core_model__DOT__stall_en;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6c6f67U;
    __Vtemp_1[1U] = 0x6f64656cU;
    __Vtemp_1[2U] = 0x6dU;
    vlSelfRef.tb__DOT__file_pointer = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                                                  , 
                                                  std::string{"w"});
    ;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         38);
    if (VL_UNLIKELY(((0U != vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))) {
        VL_FWRITEF_NX(vlSelfRef.tb__DOT__file_pointer,"0x%8x (0x%8x)\n",0,
                      32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory,
                      32,vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory);
    }
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         42);
    while (1U) {
        if (vlSelfRef.tb__DOT__update) {
            if ((((0U == ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory)
                           ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                       >> 7U)) : 0U)) 
                  & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
                 & (~ (IData)(vlSelfRef.tb__DOT__stall_mem)))) {
                if (vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_memory) {
                    VL_FWRITEF_NX(vlSelfRef.tb__DOT__file_pointer,"0x%8x (0x%8x) data_memory x%0#  0x%8x\n",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory,
                                  32,((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_memory)
                                       ? vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
                                      [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory)]
                                       : 0U));
                } else {
                    VL_FWRITEF_NX(vlSelfRef.tb__DOT__file_pointer,"0x%8x (0x%8x)\n",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory);
                }
            } else if (((0U != vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory) 
                        & (~ (IData)(vlSelfRef.tb__DOT__stall_mem)))) {
                if ((9U < ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory)
                            ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                        >> 7U)) : 0U))) {
                    VL_FWRITEF_NX(vlSelfRef.tb__DOT__file_pointer,"0x%8x (0x%8x) x%0# 0x%8x\n",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory,
                                  5,((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory)
                                      ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                                  >> 7U))
                                      : 0U),32,vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data);
                } else {
                    VL_FWRITEF_NX(vlSelfRef.tb__DOT__file_pointer,"0x%8x (0x%8x) x%0#  0x%8x\n",0,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory,
                                  32,vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory,
                                  5,((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory)
                                      ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                                  >> 7U))
                                      : 0U),32,vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data);
                }
            }
            co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                                 nullptr, 
                                                 "tb/tb.sv", 
                                                 59);
        }
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb__DOT__clk = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             65);
        vlSelfRef.tb__DOT__clk = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             67);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__rstn = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb.sv", 
                                         71);
    vlSelfRef.tb__DOT__rstn = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3d0900ULL, 
                                         nullptr, "tb/tb.sv", 
                                         74);
    vlSelfRef.tb__DOT__addr = 0U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 1U;
    vlSelfRef.tb__DOT__addr = 1U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 2U;
    vlSelfRef.tb__DOT__addr = 2U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 3U;
    vlSelfRef.tb__DOT__addr = 3U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 4U;
    vlSelfRef.tb__DOT__addr = 4U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 5U;
    vlSelfRef.tb__DOT__addr = 5U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 6U;
    vlSelfRef.tb__DOT__addr = 6U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 7U;
    vlSelfRef.tb__DOT__addr = 7U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 8U;
    vlSelfRef.tb__DOT__addr = 8U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 9U;
    vlSelfRef.tb__DOT__addr = 9U;
    VL_WRITEF_NX("data @ mem[0x%8x] = %8x\n",0,32,vlSelfRef.tb__DOT__addr,
                 32,vlSelfRef.tb__DOT__data);
    vlSelfRef.tb__DOT__unnamedblk1__DOT__i = 0xaU;
    VL_FINISH_MT("tb/tb.sv", 79, "");
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__3(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSelfRef.tb__DOT__stall_f_d = 0U;
        vlSelfRef.tb__DOT__stall_excte = 0U;
        vlSelfRef.tb__DOT__stall_mem = 0U;
        vlSelfRef.tb__DOT__stall_wb = 0U;
        while ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en)))) {
            co_await vlSelfRef.__VtrigSched_hd98da3bc__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( tb.i_core_model.stall_en)", 
                                                                 "tb/tb.sv", 
                                                                 88);
        }
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             89);
        vlSelfRef.tb__DOT__stall_f_d = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             91);
        vlSelfRef.tb__DOT__stall_excte = 1U;
        vlSelfRef.tb__DOT__stall_f_d = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             94);
        vlSelfRef.tb__DOT__stall_mem = 1U;
        vlSelfRef.tb__DOT__stall_excte = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             97);
        vlSelfRef.tb__DOT__stall_wb = 1U;
        vlSelfRef.tb__DOT__stall_mem = 0U;
        co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                             nullptr, 
                                             "tb/tb.sv", 
                                             100);
    }
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__4(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__pipe_pc = VL_FOPEN_NN(std::string{"pipe.log"}
                                             , std::string{"w"});
    ;
    VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"Fetch          Decode         Execute        Memory         Write Back\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb.sv", 
                                         109);
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h95cd0708__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb.clk)", 
                                                             "tb/tb.sv", 
                                                             111);
        if (VL_UNLIKELY((((0U == vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch) 
                          & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch))))) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"FLUSHED        ",0);
        } else if (vlSelfRef.tb__DOT__stall_f_d) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"STALLED        ",0);
            VL_WRITEF_NX("stalled x%0#\n",0,1,vlSelfRef.tb__DOT__stall_f_d);
        } else {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"0x%8x     ",0,
                          32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch);
            VL_WRITEF_NX("not stalled x%0#\n",0,1,vlSelfRef.tb__DOT__stall_f_d);
        }
        if (VL_UNLIKELY((((0U == vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode) 
                          & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode))))) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"FLUSHED        ",0);
        } else if (vlSelfRef.tb__DOT__stall_f_d) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"STALLED        ",0);
        } else {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"0x%8x     ",0,
                          32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode);
        }
        if (VL_UNLIKELY((((0U == vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte) 
                          & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte))))) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"FLUSHED        ",0);
        } else if (vlSelfRef.tb__DOT__stall_excte) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"STALLED        ",0);
        } else {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"0x%8x     ",0,
                          32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte);
        }
        if (VL_UNLIKELY((((0U == vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory) 
                          & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory))))) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"FLUSHED        ",0);
        } else if (vlSelfRef.tb__DOT__stall_mem) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"STALLED        ",0);
        } else {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"0x%8x     ",0,
                          32,vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory);
        }
        if (VL_UNLIKELY((((0U == vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o) 
                          & (0U != vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o))))) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"FLUSHED        ",0);
        } else if (vlSelfRef.tb__DOT__stall_wb) {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"STALLED        ",0);
        } else {
            VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"0x%8x     ",0,
                          32,vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o);
        }
        VL_FWRITEF_NX(vlSelfRef.tb__DOT__pipe_pc,"\n",0);
    }
}

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__addr)];
}

void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf);
void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf);
void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0;
    __VdlyVal__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0;
    __VdlyDim0__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0;
    __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v1;
    __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v1 = 0;
    // Body
    __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 = 0U;
    __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__rstn)))) {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.tb__DOT__rstn) {
        if (((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory) 
             & (0U != (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                >> 7U))))) {
            __VdlyVal__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 
                = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data;
            __VdlyDim0__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 
                = (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                            >> 7U));
            __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0 = 1U;
        }
    } else {
        __VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v1 = 1U;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0) {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[__VdlyDim0__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0] 
            = __VdlyVal__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v0;
    }
    if (__VdlySet__tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file__v1) {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[1U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[2U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[3U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[4U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[5U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[6U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[7U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[8U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[9U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xaU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xbU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xcU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xdU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xeU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0xfU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x10U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x11U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x12U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x13U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x14U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x15U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x16U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x17U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x18U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x19U] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1aU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1bU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1cU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1dU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1eU] = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0x1fU] = 0U;
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1fU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1fU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1eU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1eU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1dU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1dU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1cU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1cU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1bU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1bU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x1aU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x1aU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x19U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x19U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x18U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x18U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x17U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x17U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x16U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x16U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x15U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x15U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x14U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x14U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x13U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x13U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x12U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x12U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x11U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x11U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0x10U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0x10U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xfU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xfU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xeU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xeU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xdU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xdU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xcU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xcU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xbU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xbU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0xaU] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0xaU];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[9U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [9U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[8U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [8U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[7U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [7U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[6U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [6U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[5U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [5U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[4U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [4U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[3U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [3U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[2U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [2U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[1U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [1U];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0U] 
        = vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file
        [0U];
}

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0;
    __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 = 0;
    SData/*10:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0;
    __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 = 0;
    IData/*31:0*/ __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0;
    __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 = 0;
    SData/*15:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1;
    __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 = 0;
    SData/*10:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1;
    __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 = 0;
    IData/*31:0*/ __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1;
    __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 = 0;
    IData/*31:0*/ __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2;
    __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2 = 0;
    SData/*10:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2;
    __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2 = 0;
    SData/*10:0*/ __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v3;
    __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v3 = 0;
    // Body
    if (vlSelfRef.tb__DOT__rstn) {
        if (vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte) {
            if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
                              >> 0xcU)))) {
                __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 
                    = (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte);
                __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 
                    = (0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres);
                __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 = 0U;
                __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0 
                    = ((0xffffff00U & __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0) 
                       | (IData)(__VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0));
                vlSelfRef.__VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem.enqueue(__VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0, 0xffU, (IData)(__VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v0));
            } else if ((1U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
                                     >> 0xcU)))) {
                __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 
                    = (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte);
                __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 
                    = (0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres);
                __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 = 0U;
                __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1 
                    = ((0xffff0000U & __VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1) 
                       | (IData)(__VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1));
                vlSelfRef.__VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem.enqueue(__VdlyElem__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1, 0xffffU, (IData)(__VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v1));
            } else if ((2U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
                                     >> 0xcU)))) {
                __VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte;
                __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2 
                    = (0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres);
                vlSelfRef.__VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem.enqueue(__VdlyVal__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2, 0xffffffffU, (IData)(__VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v2));
            }
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x800U, vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v3 
                = (0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem__v3));
            vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    vlSelfRef.tb__DOT__update = vlSelfRef.tb__DOT__rstn;
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_memory 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte));
    vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok));
    if (vlSelfRef.tb__DOT__rstn) {
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory 
            = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres;
        if (vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok) {
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en)))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__shamt 
                = vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch 
                = vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__instr_mem
                [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next 
                            >> 2U))];
            vlSelfRef.tb__DOT__i_core_model__DOT__rs1 
                = vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data 
                = vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data;
            vlSelfRef.tb__DOT__i_core_model__DOT__rs2 
                = vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2;
        }
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory 
            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o 
            = vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory;
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__shamt = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch 
            = vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__instr_mem
            [0U];
        vlSelfRef.tb__DOT__i_core_model__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__rs2 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem.commit(vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem);
    if (vlSelfRef.tb__DOT__rstn) {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o 
            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory;
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte 
            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data;
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte 
            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory 
            = vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte 
            = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode;
        if (vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok) {
            vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode 
                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en)))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode 
                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch;
            vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                = vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr;
        }
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch 
            = vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next;
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch = 0x80000000U;
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_excte));
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en));
    vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
        = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory)];
    vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_excte 
        = ((IData)(vlSelfRef.tb__DOT__rstn) && (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en));
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres 
        = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte)
            ? vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte
            : 0U);
    vlSelfRef.tb__DOT__i_core_model__DOT__load_adres = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory) {
        vlSelfRef.tb__DOT__i_core_model__DOT__load_adres = 0U;
        if ((1U & (~ ((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
                      | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))))) {
            if ((3U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__load_adres 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory;
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data 
        = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__load_adres)];
    vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory) {
        vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data 
            = (((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
                | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))
                ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory)
                : ((3U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory))
                    ? ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                        ? ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                            ? 0U : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                     ? (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data)
                                     : (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data)))
                        : ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                            ? ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                ? 0U : vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data)
                            : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                ? ((0x10000U & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data 
                                                << 9U)) 
                                   | (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data))
                                : ((0x100U & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data 
                                              << 1U)) 
                                   | (0xffU & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data)))))
                    : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory));
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                  >> 6U)))) {
        if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                      >> 5U)))) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 0xdU)))) {
                                        if ((0x1000U 
                                             & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                            if ((0U 
                                                 == 
                                                 (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 0x19U))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                    = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                            } else if (
                                                       (0x20U 
                                                        == 
                                                        (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                         >> 0x19U))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                    = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                   >> 0xdU)))) {
                                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                        if ((0U == 
                                             (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                              >> 0x19U))) {
                                            vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data 
                                                = vlSelfRef.tb__DOT__i_core_model__DOT__shamt;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs1_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard = 0U;
    if ((0U != (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                         >> 0xfU)))) {
        if ((((0x63U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)) 
              & (0x23U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte))) 
             & (3U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)))) {
            if (((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                           >> 0xfU)) == (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
                                                  >> 7U)))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs1_en = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard 
                    = (((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)) 
                        | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)))
                        ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte)
                        : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte);
            }
        }
        if (((0x63U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
             & (0x23U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))) {
            if ((((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                            >> 0xfU)) == (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                                   >> 7U))) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs1_en)))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard 
                    = (((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
                        | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))
                        ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory)
                        : ((3U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory))
                            ? ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                ? ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                    ? 0U : ((0x1000U 
                                             & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                             ? (0xffffU 
                                                & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)
                                             : (0xffU 
                                                & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)))
                                : ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                    ? ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                        ? 0U : vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)
                                    : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                        ? ((0x10000U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
                                               << 9U)) 
                                           | (0xffffU 
                                              & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard))
                                        : ((0x100U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
                                               << 1U)) 
                                           | (0xffU 
                                              & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)))))
                            : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory));
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs2_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard = 0U;
    if ((0U != (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                         >> 0x14U)))) {
        if ((((0x63U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)) 
              & (0x23U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte))) 
             & (3U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)))) {
            if (((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                           >> 0x14U)) == (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte 
                                                   >> 7U)))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs2_en = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard 
                    = (((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)) 
                        | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)))
                        ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte)
                        : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte);
            }
        }
        if (((0x63U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
             & (0x23U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))) {
            if ((((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                            >> 0x14U)) == (0x1fU & 
                                           (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                            >> 7U))) 
                 & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs2_en)))) {
                vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard 
                    = (((0x6fU == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)) 
                        | (0x67U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)))
                        ? ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory)
                        : ((3U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory))
                            ? ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                ? ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                    ? 0U : ((0x1000U 
                                             & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                             ? (0xffffU 
                                                & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)
                                             : (0xffU 
                                                & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)))
                                : ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                    ? ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                        ? 0U : vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)
                                    : ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory)
                                        ? ((0x10000U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
                                               << 9U)) 
                                           | (0xffffU 
                                              & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard))
                                        : ((0x100U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
                                               << 1U)) 
                                           | (0xffU 
                                              & vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard)))))
                            : vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory));
            }
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
        = vlSelfRef.tb__DOT__i_core_model__DOT__rs1;
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i 
        = vlSelfRef.tb__DOT__i_core_model__DOT__rs2;
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
    if (vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs1_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard;
    }
    if (vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
            = vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard;
    }
    if (vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs2_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i 
            = vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard;
    }
    if (vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en) {
        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i 
            = vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard;
    }
    if ((0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                              >> 2U)) && ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                 >> 1U)) 
                                          && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)));
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                        }
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                              >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode));
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    }
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                  >> 0xeU)))) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                        }
                    }
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                if ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                                     >= vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                                }
                            } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                                        < vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if (VL_GTES_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                            }
                        } else if (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        }
                    } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                             != vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                        }
                    } else if ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                                == vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
        if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
                    = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                              >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode));
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    }
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xdU;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                                if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                            >> 0x19U))) {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                        = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 4U;
                                }
                            } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                               >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 2U;
                            }
                        } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 6U;
                            } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 7U;
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 3U;
                        }
                    } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                        >> 0x19U))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                                    = ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                                        < vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)
                                        ? 0xcU : 0xbU);
                            }
                        } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                           >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                                = (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i)
                                    ? 0xcU : 0xbU);
                        }
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 5U;
                        }
                    } else if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                       >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                          >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 1U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
        } else {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((0U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                      >> 0xcU)))) {
                        if ((1U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                          >> 0xcU)))) {
                            if ((2U != (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                              >> 0xcU)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                            }
                        }
                    }
                    if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                      >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else if ((1U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                             >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else if ((2U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                             >> 0xcU)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en 
                = ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                             >> 3U))) && ((1U & (~ 
                                                 (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 2U))) 
                                          && ((1U & 
                                               (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                >> 1U)) 
                                              && ((1U 
                                                   & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode) 
                                                  && ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                           >> 0xcU))) 
                                                      || ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                               >> 0xcU))) 
                                                          || (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                                  >> 0xcU)))))))));
        }
    } else if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
                = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                          >> 1U)) && (1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode));
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((1U & (~ vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode))) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                }
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode;
                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 4U;
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 2U;
                        }
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 9U;
                        } else if ((0x20U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                              >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xaU;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 1U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 3U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
                        = ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                  >> 0xdU)) || ((1U 
                                                 & (~ 
                                                    (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                     >> 0xcU))) 
                                                || ((0U 
                                                     == 
                                                     (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                      >> 0x19U)) 
                                                    || (0x30U 
                                                        == 
                                                        (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                         >> 0x19U)))));
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel 
                            = ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)
                                ? ((vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i 
                                    < vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data)
                                    ? 0xcU : 0xbU) : 
                               (VL_LTS_III(32, vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i, vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data)
                                 ? 0xcU : 0xbU));
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                    >> 0x19U))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                            vlSelfRef.tb__DOT__i_core_model__DOT__sel = 8U;
                        } else if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                              >> 0x19U))) {
                            if ((0U == (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                 >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xeU;
                            } else if ((1U == (0x1fU 
                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0xfU;
                            } else if ((2U == (0x1fU 
                                               & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                  >> 0x14U)))) {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                    = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                                vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0x10U;
                            } else {
                                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                            }
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                }
                if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                              >> 0xeU)))) {
                    if ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                  >> 0xdU)))) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                            if ((0U != (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                        >> 0x19U))) {
                                if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                               >> 0x19U))) {
                                    if ((0U != (0x1fU 
                                                & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                   >> 0x14U)))) {
                                        if ((1U != 
                                             (0x1fU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                 >> 0x14U)))) {
                                            if ((2U 
                                                 != 
                                                 (0x1fU 
                                                  & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                     >> 0x14U)))) {
                                                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                                            }
                                        }
                                    }
                                } else {
                                    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en 
            = ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                         >> 3U))) && ((1U & (~ (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                >> 2U))) 
                                      && ((1U & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                 >> 1U)) 
                                          && ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode) 
                                              && (1U 
                                                  & ((0x4000U 
                                                      & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)
                                                      ? 
                                                     (~ 
                                                      (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                       >> 0xdU))
                                                      : 
                                                     ((1U 
                                                       & (~ 
                                                          (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                           >> 0xdU))) 
                                                      || (1U 
                                                          & (~ 
                                                             (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                              >> 0xcU))))))))));
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                        vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                        vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                    }
                } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i;
                    vlSelfRef.tb__DOT__i_core_model__DOT__number2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data;
                    vlSelfRef.tb__DOT__i_core_model__DOT__sel = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__number2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = 0U;
        }
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
    if ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel)))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__i = 0x20U;
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = 0U;
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & vlSelfRef.tb__DOT__i_core_model__DOT__number1));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 1U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 2U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 3U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 4U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 5U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 6U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 7U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 8U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 9U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xaU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xbU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xcU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xdU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xeU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0xfU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x10U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x11U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x12U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x13U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x14U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x15U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x16U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x17U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x18U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x19U)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1aU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1bU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1cU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1dU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (1U & (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                            >> 0x1eU)));
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = (vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                   + (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                      >> 0x1fU));
        }
    } else if ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
        if ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
            if ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
                if ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))) {
                    if ((0U == vlSelfRef.tb__DOT__i_core_model__DOT__number1)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0x20U;
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xffffU & vlSelfRef.tb__DOT__i_core_model__DOT__number1)) 
                                  << 4U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 
                            = (0xffffU & ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                           ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                              >> 0x10U)
                                           : vlSelfRef.tb__DOT__i_core_model__DOT__number1));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xffU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16))) 
                                  << 3U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 
                            = (0xffU & ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                         ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                            >> 8U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8))) 
                                  << 2U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 
                            = (0xfU & ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                        ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                           >> 4U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | ((0U == (3U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4))) 
                                  << 1U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 
                            = (3U & ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                      ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                         >> 2U) : (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4)));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                            = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                               | (1U & (~ (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2))));
                        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
                    }
                } else if ((0U == vlSelfRef.tb__DOT__i_core_model__DOT__number1)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu = 0x20U;
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0xfU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                      >> 0x10U)) << 4U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 
                        = (0xffffU & ((0x10U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                       ? vlSelfRef.tb__DOT__i_core_model__DOT__number1
                                       : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                          >> 0x10U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x17U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (0xffU & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                               >> 8U))) 
                              << 3U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 
                        = (0xffU & ((8U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                     ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16)
                                     : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16) 
                                        >> 8U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1bU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (0xfU & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                              >> 4U))) 
                              << 2U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 
                        = (0xfU & ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                    ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8)
                                    : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8) 
                                       >> 4U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1dU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | ((0U == (3U & ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                            >> 2U))) 
                              << 1U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 
                        = (3U & ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result))
                                  ? (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4)
                                  : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4) 
                                     >> 2U)));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result 
                        = ((0x1eU & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result)) 
                           | (1U & (~ ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2) 
                                       >> 1U))));
                    vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                    = ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? vlSelfRef.tb__DOT__i_core_model__DOT__number1
                        : 1U);
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
                = ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? 0U : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                                >> (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data)))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           >> (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data))
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           << (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data))));
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu 
            = ((4U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                ? ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? VL_SHIFTRS_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : VL_SHIFTR_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? VL_SHIFTL_III(32,32,32, vlSelfRef.tb__DOT__i_core_model__DOT__number1, vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           & vlSelfRef.tb__DOT__i_core_model__DOT__number2)))
                : ((2U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                    ? ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           ^ vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           | vlSelfRef.tb__DOT__i_core_model__DOT__number2))
                    : ((1U & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__sel))
                        ? (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           - vlSelfRef.tb__DOT__i_core_model__DOT__number2)
                        : (vlSelfRef.tb__DOT__i_core_model__DOT__number1 
                           + vlSelfRef.tb__DOT__i_core_model__DOT__number2))));
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
        = vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch;
    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2 = 0U;
    if ((0x40U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(12,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0x14U) | (((0xff000U 
                                                   & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                       >> 0x14U))));
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        if ((0U == (7U & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                          >> 0xcU)))) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                           >> 0xfU))];
                        }
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                        = ((VL_EXTENDS_II(19,1, (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                 >> 0x1fU)) 
                            << 0xdU) | (((0x1000U & 
                                          (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                           >> 0x13U)) 
                                         | (0x800U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               << 4U))) 
                                        | ((0x7e0U 
                                            & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                 >> 7U)))));
                    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2 = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                   >> 0xfU))];
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                   >> 0x14U))];
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        }
    } else if ((0x20U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                            = (0xfffff000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr);
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                   >> 0xfU))];
                    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2 = 1U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                   >> 0x14U))];
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            }
        } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                    = ((VL_EXTENDS_II(20,1, (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                             >> 0x1fU)) 
                        << 0xcU) | ((0xfe0U & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                >> 7U))));
                vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2 = 1U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                    [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                               >> 0xfU))];
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 
                    = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                    [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                               >> 0x14U))];
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        }
    } else if ((0x10U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                        = (0xfffff000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr);
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            }
        } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
                if ((0x4000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                           >> 0xfU))];
                        } else {
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                                = ((VL_EXTENDS_II(20,1, 
                                                  (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                   >> 0x1fU)) 
                                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                >> 0x14U));
                            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                           >> 0xfU))];
                        }
                    } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt 
                            = (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                        >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    }
                } else if ((0x2000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                            = ((VL_EXTENDS_II(20,1, 
                                              (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                               >> 0x1fU)) 
                                << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                            >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    }
                } else if ((0x1000U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
                    if ((0U == (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt 
                            = (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                        >> 0x14U));
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    } else if ((0x30U == (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                          >> 0x19U))) {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                            = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                            [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                       >> 0xfU))];
                    } else {
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
                        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                    }
                } else {
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                        = ((VL_EXTENDS_II(20,1, (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                                 >> 0x1fU)) 
                            << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                        >> 0x14U));
                    vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                        = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                        [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                   >> 0xfU))];
                }
            } else {
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
                vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
            }
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        }
    } else if ((8U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
    } else if ((4U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
    } else if ((2U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
        if ((1U & vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr)) {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data 
                = ((VL_EXTENDS_II(20,1, (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                         >> 0x1fU)) 
                    << 0xcU) | (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                                >> 0x14U));
            vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1 = 1U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 
                = vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back
                [(0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr 
                           >> 0xfU))];
        } else {
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
            vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
        }
    } else {
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = 0U;
        vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = 0U;
    }
    vlSelfRef.tb__DOT__i_core_model__DOT__stall_en 
        = ((3U != (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte)) 
           && ((3U == (0x7fU & vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode)) 
               && ((((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch 
                               >> 0xfU)) == (0x1fU 
                                             & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                >> 7U))) 
                    & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1)) 
                   || (((0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch 
                                  >> 0x14U)) == (0x1fU 
                                                 & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode 
                                                    >> 7U))) 
                       & (IData)(vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2)))));
    vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next 
        = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte)
            ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte)
                ? vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte
                : 0U) : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en)
                          ? vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch
                          : ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch)));
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd98da3bc__0.resume(
                                                   "@( tb.i_core_model.stall_en)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h95cd0708__0.resume(
                                                   "@(posedge tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd98da3bc__0.commit(
                                                   "@( tb.i_core_model.stall_en)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h95cd0708__0.commit(
                                                   "@(posedge tb.clk)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
