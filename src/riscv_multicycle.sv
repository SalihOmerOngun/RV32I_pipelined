`timescale 1 ns / 1 ps

module riscv_multicycle
  import riscv_pkg::*;
#(
    parameter DMemInitFile  = "dmem.mem",       // data memory initialization file
    parameter IMemInitFile  = "imem.mem"       // instruction memory initialization file
)    (
    input  logic clk_i,
    input  logic rstn_i,
    input  logic  [XLEN-1:0] addr_i, // data_o icin
    output logic             update_o, 
    output logic  [XLEN-1:0] data_o, // testbenchte bakılacak unutma 
    output logic  [XLEN-1:0] pc_o,
    output logic  [XLEN-1:0] instr_o,
    output logic  [     4:0] reg_addr_o,
    output logic  [XLEN-1:0] reg_data_o,
    output logic  [XLEN-1:0] mem_addr_o,  // retired memory address
    output logic  [XLEN-1:0] mem_data_o,  // retired memory data
    output logic             mem_wrt_o
);
    ///////// fetch 
    logic [31:0] pc_fetch; 
    logic [31:0] instr_fetch;    
    ////////

    ////////// decode
    logic [31:0] pc_decode;
    logic [31:0] instr_decode;         
    //////////

    logic flush;
    logic flush_en;

    ///////// alu
    logic  [31:0] alu_out_alu;
    ////////

    //////// execute
    logic [31:0] mem_data_excte;    
    logic jump_ok_excte;
    logic reg_file_en_excte; 
    logic [31:0] instr_excte;   
    logic [31:0] pc_excte;   
    logic mem_en_excte;
    logic  [31:0] alu_out_excte;
    /////////

    ////////// memory
    logic reg_file_en_memory;
    logic mem_en_memory;
    logic [31:0] mem_data_adres_memory;
    logic  [31:0] alu_out_memory;
    logic [31:0] pc_memory; 
    logic [31:0] instr_memory;
    //////////

    //////////// alu
    logic [31:0] reg_file_write_back  [31:0]; 
    ///////////

   ////////////  decode to execute
    logic [31:0] rs1;      
    logic [31:0] rs2;     
    logic [31:0] instr_mem_data; 
    logic [4:0] shamt; 
    ///////////

    //////////// execute to alu
    logic  [4:0] sel; 
    logic  [31:0] number1;    
    logic  [31:0] number2;  
    logic  [4:0] shamt_data;  
    ///////////

    /////////// write back to memory or hazard_unit to memory (load komutu için memeory den veri okuma)
    logic [31:0] load_adres;
    logic [31:0] load_mem_data;
    logic [31:0] load_adres_hazard;
    logic [31:0] load_mem_data_hazard;
    ///////////

    //////////// hazard
    logic forw_mem_rs1_en;     // hazard unitten al
    logic forw_wrtbck_rs1_en;// hazard unitten al
    logic forw_mem_rs2_en;// hazard unitten al
    logic forw_wrtbck_rs2_en;  // hazard unitten al
    logic hazard_rs1;
    logic hazard_rs2;  
    logic stall_en;
    logic [31:0] rs1_hazard; // hazard unitten al
    logic [31:0] rs2_hazard; // hazard unitten al
    /////////// 

/////////////////////  bunlara tekrar ayar yaparsın//////////////////////////////////////
    assign data_o = mem_inst.data_mem[addr_i];                         // port atamasi       
    assign instr_o = instr_memory;// port atamasi
    assign reg_addr_o = reg_file_en_memory ? instr_memory[11:7] : 5'b0;// port atamasi
    assign reg_data_o = wrt_bck_inst.reg_data; // port atamasi
    assign mem_data_o = mem_en_memory ? mem_inst.data_mem[mem_data_adres_memory[10:0]] : 32'b0;
    assign mem_addr_o = mem_data_adres_memory; 
    assign mem_wrt_o = mem_en_memory;
    assign pc_o = pc_memory; // port atamasi

//////////////////////////////////////////////////////////////////////////////////////////
    


/////////////////////////////////////////////////////////////////  instantiation ///////////////////////////////////////////////////////
    fetch 
    #(
        .DMemInitFile("dmem.mem"),
        .IMemInitFile("imem.mem")
    ) fetch_inst (
        .clk_i(clk_i),
        .rstn_i(rstn_i),
        .alu_out_i(alu_out_excte),  // input form execute **** BU SIKINTI CIKARABILIR ********
        .update_o(update_o),  // porta bağlı    
        .jump_ok(jump_ok_excte),
        .flush(flush),
        .stall_en(stall_en),
        .pc_fetch(pc_fetch), // output to decode     
        .instr_o(instr_fetch) // output to decode      
    );   


    decode dec_inst
    (
        .clk_i(clk_i),
        .rstn_i(rstn_i),
        .reg_file(reg_file_write_back), // input from execute
        .instr_i(instr_fetch), // input form fetch 
        .pc_fetch(pc_fetch), // input form fetch 
        .stall_en(stall_en),
        .flush(flush),
        .rs1_o(rs1),  // output to execute
        .rs2_o(rs2), // output to execute
        .shamt_o(shamt), // output to execute
        .pc_o(pc_decode), // output to decode
        .instr_o(instr_decode),
        .hazard_rs1(hazard_rs1),
        .hazard_rs2(hazard_rs2),
        .instr_mem_data_o(instr_mem_data) // output to execute
    );

    execute execute_inst  
    (
        .clk_i(clk_i),
        .rstn_i(rstn_i),        
        .instr(instr_decode), // input from decode
        .rs1(rs1), // input from decode
        .rs2(rs2), // input from decode
        .instr_mem_data(instr_mem_data), // input from decode
        .shamt(shamt), // input from decode
        .pc_decode(pc_decode), // input from decode
        .alu_out_i(alu_out_alu), // input from alu 
        .flush_en(flush_en),
        .forw_mem_rs1_en(forw_mem_rs1_en),     // hazard unitten al
        .forw_wrtbck_rs1_en(forw_wrtbck_rs1_en),// hazard unitten al
        .forw_mem_rs2_en(forw_mem_rs2_en),// hazard unitten al
        .forw_wrtbck_rs2_en(forw_wrtbck_rs2_en),  // hazard unitten al  
        .rs1_hazard(rs1_hazard), // hazard unitten al
        .rs2_hazard(rs2_hazard), // hazard unitten al 
        .jump_ok_o(jump_ok_excte), // output to fetch
        .number1(number1), // output to alu
        .number2(number2), // output to alu
        .shamt_data(shamt_data), // output to alu
        .sel(sel), // output to alu
        .mem_data_o(mem_data_excte), // output to data memory
        .reg_file_en_o(reg_file_en_excte), // output to data memory
        .alu_out_o(alu_out_excte), // output to fetch and data emmory 
        .instr_o(instr_excte), // output to data memory
        .pc_o(pc_excte), // output to data memory 
        .mem_en_o(mem_en_excte) // output to data memory
    );

    alu alu_inst
    (
        .number1(number1),// input from execute
        .number2(number2),// input from execute
        .shamt_data(shamt_data),// input from execute
        .sel(sel),// input from execute
        .alu_out(alu_out_alu) // output to execute
    );
    
    hazard_unit hazard_inst
    (
        .clk_i(clk_i),
        .rstn_i(rstn_i),
        .instr_excte(instr_excte),
        .instr_fetch(instr_fetch),
        .hazard_rs1(hazard_rs1),
        .hazard_rs2(hazard_rs2),
        .pc_excte(pc_excte),
        .pc_memory(pc_memory),
        .load_mem_data_hazard(load_mem_data_hazard),
        .load_adres_hazard(load_adres_hazard),
        .instr_decode(instr_decode),
        .instr_memory(instr_memory),
        .alu_out_excte(alu_out_excte),
        .alu_out_memory(alu_out_memory),
        .flush_en(flush_en),
        .flush(flush),
        .forw_mem_rs1_en(forw_mem_rs1_en),     
        .forw_wrtbck_rs1_en(forw_wrtbck_rs1_en),
        .forw_mem_rs2_en(forw_mem_rs2_en),
        .forw_wrtbck_rs2_en(forw_wrtbck_rs2_en),
        .stall_en(stall_en),  
        .rs1_hazard(rs1_hazard), 
        .rs2_hazard(rs2_hazard)

    );

    memory mem_inst
    (
        .clk_i(clk_i),
        .rstn_i(rstn_i),
        .instr(instr_excte), // input from execute
        .reg_file_en_i(reg_file_en_excte), // input from execute
        .alu_out_i(alu_out_excte), // input from execute
        .load_mem_data(load_mem_data),
        .load_adres(load_adres),
        .load_mem_data_hazard(load_mem_data_hazard),
        .load_adres_hazard(load_adres_hazard),        
        .pc_excte(pc_excte),  // input from execute
        .mem_en_i(mem_en_excte), // input from execute
        .mem_data_i(mem_data_excte), // input from execute
        .reg_file_en_o(reg_file_en_memory), // output to write back
        .mem_en_o(mem_en_memory),
        .mem_data_adres_o(mem_data_adres_memory),
        .alu_out_o(alu_out_memory), // output to write back
        .pc_o(pc_memory), // output to write back
        .instr_o(instr_memory) // output to write back
    );



    write_back  wrt_bck_inst
    (
        .clk_i(clk_i),
        .rstn_i(rstn_i),
        .pc_memory(pc_memory), // input from memory
        .instr(instr_memory), // input from memory
        .load_mem_data(load_mem_data),
        .load_adres(load_adres),
        .reg_file_en_i(reg_file_en_memory), // input from memory
        .mem_en_i(mem_en_memory), // input from memory 
        .mem_data_adres_i(mem_data_adres_memory),
        .alu_out_i(alu_out_memory), // input from memory
        .reg_file_o(reg_file_write_back) // output to decode
    );
endmodule


