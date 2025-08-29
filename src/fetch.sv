`timescale 1 ns / 1 ps

module fetch
  import riscv_pkg::*;
#(
    parameter DMemInitFile  = "dmem.mem",       // data memory initialization file
    parameter IMemInitFile  = "imem.mem"       // instruction memory initialization file
)    (
    input  logic clk_i,
    input  logic rstn_i,
    input logic [31:0] alu_out_i, // execute dan al    
    input logic jump_ok,
    input stall_en,
    input flush, // input from hazard unit // new_flush
    output logic update_o, 
    output logic  [31:0] pc_fetch, // decode ver
    output logic  [31:0] instr_o // decode ver 
);
    logic [31:0] pc_next;
    logic [31:0] jump_pc;
    logic [31:0] instr;
    logic [31:0] instr_mem [2047:0]; 


    initial begin  
        $readmemh("D:/SSTU_lab_project/imem.mem", instr_mem, 0, 2047); //Windows için
        //$readmemh(IMemInitFile, instr_mem, 0, 2047);
    end   

    always_ff @(posedge clk_i) begin  
       if (rstn_i == 0) begin
            pc_fetch <= 32'h8000_0000;  
            update_o <= 0;
       end else begin
            pc_fetch <= pc_next;
            update_o<= 1;
       end
    end
 
    always_comb begin 
        pc_next = pc_fetch;  
        if (jump_ok) begin
            pc_next = jump_pc; 
        end 
        else begin
            if(stall_en == 1) begin // hazard için
                pc_next = pc_fetch;  
            end
            else begin
                pc_next = pc_fetch + 4;
            end
        end
    end

    assign instr = instr_mem[pc_next[12:2]]; 

    always_ff @(posedge clk_i) begin // pipelined
       if (rstn_i == 0) begin
            instr_o <= instr_mem[0];
       end else if(flush == 1) begin
            instr_o <= 32'b0;     
       end else if (!stall_en) begin
            instr_o <= instr; // normalde assign ile atamıştım şimdi always_ff içinde atadım
       end
    end

    always_comb begin 
        if(jump_ok) begin
            jump_pc = alu_out_i;
        end
        else begin
            jump_pc = 32'b0;
        end
    end


endmodule
