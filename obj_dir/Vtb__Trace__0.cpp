// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb___024root__trace_chg_0_sub_0(Vtb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_chg_0_sub_0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_write_back[31]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[0]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[1]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[2]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[3]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[4]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[5]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[6]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[7]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[8]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[9]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[10]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[11]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[12]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[13]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[14]),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[15]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[16]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[17]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[18]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[19]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[20]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[21]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[22]),32);
        bufp->chgIData(oldp+55,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[23]),32);
        bufp->chgIData(oldp+56,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[24]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[25]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[26]),32);
        bufp->chgIData(oldp+59,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[27]),32);
        bufp->chgIData(oldp+60,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[28]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[29]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[30]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_file[31]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+65,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_memory),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory),32);
        bufp->chgCData(oldp+67,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory)
                                  ? (0x1fU & (vlSelfRef.tb__DOT__i_core_model__DOT__instr_memory 
                                              >> 7U))
                                  : 0U)),5);
        bufp->chgIData(oldp+68,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__reg_data),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory),32);
        bufp->chgBit(oldp+70,(vlSelfRef.tb__DOT__update));
        bufp->chgBit(oldp+71,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_memory));
        bufp->chgIData(oldp+72,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_fetch),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_fetch),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_decode),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_decode),32);
        bufp->chgBit(oldp+76,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__jump_ok));
        bufp->chgIData(oldp+77,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_alu),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_excte),32);
        bufp->chgBit(oldp+79,(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte));
        bufp->chgBit(oldp+80,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_excte));
        bufp->chgIData(oldp+81,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_excte),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb__DOT__i_core_model__DOT__pc_excte),32);
        bufp->chgBit(oldp+83,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_excte));
        bufp->chgIData(oldp+84,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte),32);
        bufp->chgBit(oldp+85,(vlSelfRef.tb__DOT__i_core_model__DOT__reg_file_en_memory));
        bufp->chgIData(oldp+86,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_memory),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb__DOT__i_core_model__DOT__rs1),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb__DOT__i_core_model__DOT__rs2),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb__DOT__i_core_model__DOT__instr_mem_data),32);
        bufp->chgCData(oldp+90,(vlSelfRef.tb__DOT__i_core_model__DOT__shamt),5);
        bufp->chgCData(oldp+91,(vlSelfRef.tb__DOT__i_core_model__DOT__sel),5);
        bufp->chgIData(oldp+92,(vlSelfRef.tb__DOT__i_core_model__DOT__number1),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tb__DOT__i_core_model__DOT__number2),32);
        bufp->chgCData(oldp+94,(vlSelfRef.tb__DOT__i_core_model__DOT__shamt_data),5);
        bufp->chgIData(oldp+95,(vlSelfRef.tb__DOT__i_core_model__DOT__load_adres),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb__DOT__i_core_model__DOT__load_mem_data_hazard),32);
        bufp->chgBit(oldp+98,(vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs1_en));
        bufp->chgBit(oldp+99,(vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs1_en));
        bufp->chgBit(oldp+100,(vlSelfRef.tb__DOT__i_core_model__DOT__forw_mem_rs2_en));
        bufp->chgBit(oldp+101,(vlSelfRef.tb__DOT__i_core_model__DOT__forw_wrtbck_rs2_en));
        bufp->chgIData(oldp+102,(vlSelfRef.tb__DOT__i_core_model__DOT__rs1_hazard),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb__DOT__i_core_model__DOT__rs2_hazard),32);
        bufp->chgCData(oldp+104,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__result),5);
        bufp->chgIData(oldp+105,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__i),32);
        bufp->chgSData(oldp+106,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val16),16);
        bufp->chgCData(oldp+107,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val8),8);
        bufp->chgCData(oldp+108,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val4),4);
        bufp->chgCData(oldp+109,(vlSelfRef.tb__DOT__i_core_model__DOT__alu_inst__DOT__val2),2);
        bufp->chgIData(oldp+110,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs1_i),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__rs2_i),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_data),32);
        bufp->chgBit(oldp+113,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__reg_file_en));
        bufp->chgBit(oldp+114,(vlSelfRef.tb__DOT__i_core_model__DOT__execute_inst__DOT__mem_en));
        bufp->chgIData(oldp+115,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__jump_ok_excte)
                                   ? vlSelfRef.tb__DOT__i_core_model__DOT__alu_out_excte
                                   : 0U)),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__mem_adres),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+118,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__pc_o),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb__DOT__i_core_model__DOT__wrt_bck_inst__DOT__instr_o),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+120,(vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs1));
        bufp->chgBit(oldp+121,(vlSelfRef.tb__DOT__i_core_model__DOT__hazard_rs2));
        bufp->chgBit(oldp+122,(vlSelfRef.tb__DOT__i_core_model__DOT__stall_en));
        bufp->chgIData(oldp+123,(vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs1),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__rs2),32);
        bufp->chgCData(oldp+125,(vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__shamt),5);
        bufp->chgIData(oldp+126,(vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr_mem_data),32);
        bufp->chgIData(oldp+127,(vlSelfRef.tb__DOT__i_core_model__DOT__dec_inst__DOT__instr),32);
        bufp->chgIData(oldp+128,(vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next),32);
    }
    bufp->chgIData(oldp+129,(vlSelfRef.tb__DOT__addr),32);
    bufp->chgIData(oldp+130,(vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
                             [(0x7ffU & vlSelfRef.tb__DOT__addr)]),32);
    bufp->chgIData(oldp+131,(((IData)(vlSelfRef.tb__DOT__i_core_model__DOT__mem_en_memory)
                               ? vlSelfRef.tb__DOT__i_core_model__DOT__mem_inst__DOT__data_mem
                              [(0x7ffU & vlSelfRef.tb__DOT__i_core_model__DOT__mem_data_adres_memory)]
                               : 0U)),32);
    bufp->chgBit(oldp+132,(vlSelfRef.tb__DOT__clk));
    bufp->chgBit(oldp+133,(vlSelfRef.tb__DOT__rstn));
    bufp->chgBit(oldp+134,(vlSelfRef.tb__DOT__stall_f_d));
    bufp->chgBit(oldp+135,(vlSelfRef.tb__DOT__stall_excte));
    bufp->chgBit(oldp+136,(vlSelfRef.tb__DOT__stall_mem));
    bufp->chgBit(oldp+137,(vlSelfRef.tb__DOT__stall_wb));
    bufp->chgIData(oldp+138,(vlSelfRef.tb__DOT__file_pointer),32);
    bufp->chgIData(oldp+139,(vlSelfRef.tb__DOT__pipe_pc),32);
    bufp->chgIData(oldp+140,(vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__instr_mem
                             [(0x7ffU & (vlSelfRef.tb__DOT__i_core_model__DOT__fetch_inst__DOT__pc_next 
                                         >> 2U))]),32);
    bufp->chgIData(oldp+141,(vlSelfRef.tb__DOT__unnamedblk1__DOT__i),32);
}

void Vtb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root__trace_cleanup\n"); );
    // Init
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
