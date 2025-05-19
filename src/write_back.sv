`timescale 1 ns / 1 ps

module write_back // write_back
(
    input  logic clk_i,
    input  logic rstn_i,   
    input  logic [31:0] pc_memory, // memory den al      
    input  logic [31:0] instr, // memory den al
    input  logic reg_file_en_i, // memorye den al    
    input  logic mem_en_i, // memory den al (testbeche yazdırmak için)   
    input  logic [31:0] mem_data_adres_i, // memory den al (testbeche yazdırmak için) 
    input  logic [31:0] alu_out_i, // memory den al
    input logic [31:0] load_mem_data, // memory den al    
    output logic [31:0] load_adres, // memory e adres olarak ver
    output logic [31:0] reg_file_o  [31:0] // decode ver
);

    logic [31:0] reg_data;
    logic [31:0] reg_file  [31:0]; 
    logic [31:0] pc_o;     //  bunlar ile pc table yaptım, bir yere bağlanmıyor yani
    logic [31:0] instr_o;//  bunlar ile pc table yaptım, bir yere bağlanmıyor yani
    assign reg_file_o = reg_file; // decode a  direkt gidecek registera gerek yok 

    always_comb  begin  
        load_adres = 32'b0;
        reg_data = 32'b0;
        if(reg_file_en_i) begin
            load_adres = 32'b0;
            if(instr[6:0] == 7'b1101111 || instr[6:0] == 7'b1100111) begin //JAL, JALR
                reg_data = pc_memory + 4;
            end
            else if(instr[6:0] == 7'b0000011) begin  // LOAD
                load_adres = alu_out_i;
                case(instr[14:12])
                    3'b000  : begin
                        reg_data = {{24{load_mem_data[7]}}, load_mem_data[7:0]};
                        //reg_data = {{24'({data_mem[alu_out_i[10:0]][7]})}, data_mem[alu_out_i[10:0]][7:0]};
                    end 
                    3'b001  : begin
                        reg_data = {{16{load_mem_data[15]}}, load_mem_data[15:0]};
                        //reg_data = {{16'({data_mem[alu_out_i[10:0]][7]})}, data_mem[alu_out_i[10:0]][15:0]};
                    end 
                    3'b010  : begin
                        reg_data = load_mem_data;
                        //reg_data = data_mem[alu_out_i[10:0]];
                    end 
                    3'b100 : begin
                        reg_data = {{24'b0}, load_mem_data[7:0]};
                        //reg_data = {{24'b0}, data_mem[alu_out_i[10:0]][7:0]};
                    end 
                    3'b101 : begin
                        reg_data = {{16'b0}, load_mem_data[15:0]};
                        //reg_data = {{16'b0}, data_mem[alu_out_i[10:0]][15:0]};
                    end  
                    default:    reg_data = 32'b0; 
                endcase       
            end 
            else begin   
                reg_data = alu_out_i;
            end    
        end  
    end

    always_ff @(negedge clk_i) begin // fall edge yap 
       if (!rstn_i) begin
         for (int i=0; i<32; ++i) begin
           reg_file[i] <= '0;
         end
       end else if (reg_file_en_i && instr[11:7] != 5'b0) begin
         reg_file[instr[11:7]] <= reg_data;
       end
    end

    always_ff @(posedge clk_i) begin // pc_table'ye yazdırmak için
       if (rstn_i == 0) begin
            pc_o <= 32'b0;
            instr_o <= 32'b0;
       end else begin
            pc_o <= pc_memory;
            instr_o <= instr;
           
       end
    end



endmodule
