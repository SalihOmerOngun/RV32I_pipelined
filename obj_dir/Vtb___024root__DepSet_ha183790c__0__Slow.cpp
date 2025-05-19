// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_static\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_final\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_settle(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_settle\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf);

VL_ATTR_COLD void Vtb___024root___eval_stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb___024root___stl_sequent__TOP__0(vlSelf);
        Vtb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb___024root___stl_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___stl_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = 0U;
    vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = 0U;
    vlSelfRef.tb__DOT__data = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__addr)];
    vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres 
        = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte)
            ? vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte
            : 0U);
    vlSelfRef.tb__DOT__i_core_model__DOT__load_adres = 0U;
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
    vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard 
        = vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
        [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory)];
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
    vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next 
        = ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte)
            ? ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte)
                ? vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte
                : 0U) : ((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en)
                          ? vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch
                          : ((IData)(4U) + vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch)));
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

VL_ATTR_COLD void Vtb___024root___eval_triggers__stl(Vtb___024root* vlSelf);

VL_ATTR_COLD bool Vtb___024root___eval_phase__stl(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__stl\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb.i_core_model.stall_en)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___dump_triggers__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb.i_core_model.stall_en)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb___024root____Vm_traceActivitySetAll(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root____Vm_traceActivitySetAll\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtb___024root___ctor_var_reset(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___ctor_var_reset\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__update = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__stall_f_d = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__stall_excte = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__stall_mem = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__stall_wb = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__file_pointer = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__pipe_pc = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__i_core_model__DOT__pc_fetch = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__instr_fetch = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__pc_decode = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__instr_decode = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__alu_out_alu = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_data_excte = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__jump_ok_excte = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__reg_file_en_excte = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__instr_excte = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__pc_excte = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__mem_en_excte = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__alu_out_excte = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__reg_file_en_memory = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__mem_en_memory = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__mem_data_adres_memory = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__alu_out_memory = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__pc_memory = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__instr_memory = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__reg_file_write_back[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__instr_mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__sel = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__number1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__number2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__shamt_data = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__load_adres = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__load_mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__load_mem_data_hazard = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__forw_mem_rs1_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__forw_mem_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__hazard_rs1 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__hazard_rs2 = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__stall_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__rs1_hazard = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__rs2_hazard = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__fetch_inst__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__dec_inst__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__result = VL_RAND_RESET_I(5);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val16 = VL_RAND_RESET_I(16);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val8 = VL_RAND_RESET_I(8);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val4 = VL_RAND_RESET_I(4);
    vlSelf->tb__DOT__i_core_model__DOT__alu_inst__DOT__val2 = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__i_core_model__DOT__stall_en__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
