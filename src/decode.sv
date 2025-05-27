`timescale 1 ns / 1 ps

module decode  // decode
(
    input  logic clk_i,
    input  logic rstn_i, 
    input  logic [31:0] reg_file  [31:0],  // write back den al 
    input  logic [31:0] instr_i,         // fetch den al
    input  logic  [31:0] pc_fetch,    // fetch den al
    input  logic stall_en, // hazard dan al
    input  logic flush, // hazard dan al
    output logic [31:0] rs1_o,      // execute ver
    output logic [31:0] rs2_o,      // execute ver
    output logic [4:0] shamt_o,     // execute ver
    output logic  [31:0] pc_o,      // exectue ver
    output logic [31:0] instr_o,    // execute ver 
    output logic hazard_rs1, // rs1 veya rs2 ye atama varsa hazard a ver
    output logic hazard_rs2,// rs1 veya rs2 ye atama varsa hazard a ver
    output logic [31:0] instr_mem_data_o      // execute ver 
);

    logic [31:0] rs1;     // source register 1 data
    logic [31:0] rs2;      // source register 2 data
    logic [4:0] shamt; 
    logic [31:0] instr_mem_data;  
    logic [31:0] instr;
    logic  [31:0] pc_i;
    always_comb begin
        instr_mem_data = 32'b0;
        rs1 = 32'b0; //  data hazard da rs1 ve rs2 != 32'bx kullanımı için yaptım
        rs2 = 32'b0; // data hazard da rs1 ve rs2 != 32'bx kullanımı için yaptım
        shamt = 5'b0;
        instr = instr_i;
        pc_i = pc_fetch;
        hazard_rs1 = 0;
        hazard_rs2 = 0;
        //if(stall_en == 1) begin
            //pc_i = pc_o;
            //instr = instr_o;// boyle yapınca icerideki sinyali degistridgin icin dogru rs1 rs2 ve hazardları vermiyorsun yaklasik 12 saaattir ugraşıyorum hatayi bulmak icin. outputta stall yap. 
        //end
        case(instr[6:0])
            7'b0110111: begin // LUI
                instr_mem_data = {instr[31:12], 12'b0}; 
            end

            7'b0010111: begin // AUIPC
                instr_mem_data = {instr[31:12], 12'b0}; 
            end     

            7'b1101111: begin // JAL
                instr_mem_data = {{12'(signed'(instr[31]))}, instr[19:12], instr[20], instr[30:21], 1'b0};
            end    

            7'b1100111: begin // JALR
                if(instr[14:12] == 3'b000) begin 
                    instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};  
                    rs1 = reg_file[instr[19:15]];
                    hazard_rs1 = 1;
                end
            end 

            7'b1100011: begin // BRANCH  // beq felan diye ayrı case yapmaya gerk var mı 
                instr_mem_data = {{19'(signed'(instr[31]))}, instr[31], instr[7], instr[30:25], instr[11:8], 1'b0};
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];
                hazard_rs1 = 1;
                hazard_rs2 = 1; 
            end  

            7'b0000011: begin  //  LOAD
                instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                rs1 = reg_file[instr[19:15]];     
                hazard_rs1 = 1;    
            end  

            7'b0100011: begin // STORE 
                instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:25], instr[11:7]};
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];   
                hazard_rs1 = 1;
                hazard_rs2 = 1;                             
            end  

            7'b0010011: begin  // IMMEDIATE
                hazard_rs1 = 1;  
                case(instr[14:12])
                    3'b000: begin // ADDI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b010: begin // SLTI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b011: begin // SLTIU
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b100: begin // XORI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b110: begin // ORI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end            
                    3'b111: begin // ANDI
                        instr_mem_data = {{20'(signed'(instr[31]))}, instr[31:20]};
                        rs1 = reg_file[instr[19:15]];
                    end      
                    3'b001: begin // SLLI
                        case(instr[31:25])
                            7'b0000000: begin // SLLI
                                shamt = instr[24:20];
                                rs1 = reg_file[instr[19:15]];
                            end
                            7'b0110000 : begin    // CTZ CLZ CPOP 
                                rs1 = reg_file[instr[19:15]];
                            end
                            default : begin
                                shamt = 5'b0;
                                rs1 = 32'b0;
                            end        
                        endcase
                    end      
                    3'b101: begin // SRLI, SRAI
                        shamt = instr[24:20];
                        rs1 = reg_file[instr[19:15]];
                    end      
                endcase                
            end

            7'b0110011: begin // aritmetik ve mantiksal
                rs1 = reg_file[instr[19:15]];
                rs2 = reg_file[instr[24:20]];      
                hazard_rs1 = 1;        
                hazard_rs2 = 1;
            end    
            default : begin
                instr_mem_data = 32'b0;
                rs1 = 32'b0;
                rs2 = 32'b0;
                shamt = 5'b0;                
            end    
        endcase       
    end     

    always_ff @(posedge clk_i ) begin // pipelined
       if (rstn_i == 0) begin // flush için pc_o ya özel bir şey yapabilirsin
            instr_o <= 32'b0;
            rs1_o <= 32'b0; // hazard icin
            rs2_o <= 32'b0; // hazard icin
            shamt_o <= 5'b0;
            pc_o <= 32'b0;
            instr_mem_data_o<= 32'b0;   
       end else if(flush == 1) begin
            instr_o <= 32'b0;
            rs1_o <= 32'b0; // hazard icin
            rs2_o <= 32'b0; // hazard icin
            shamt_o <= 5'b0;
            pc_o <= pc_i;
            instr_mem_data_o<= 32'b0;   
       //if (rstn_i == 0 || flush == 1) begin // flush için pc_o ya özel bir şey yapabilirsin
       //     instr_o <= 32'b0;
       //     rs1_o <= 32'b0; // hazard icin
       //     rs2_o <= 32'b0; // hazard icin
       //     shamt_o <= 5'b0;
       //     pc_o <= 32'b0;
       //     instr_mem_data_o<= 32'b0;
       end else begin
            if(stall_en == 0) begin // sadece instr_o<= instr yapmak yetmez. instr yenilendiği için rs1 rs2(decode içinde olup output a verilen) ler değisecek
                instr_o <= instr; 
                pc_o <= pc_i;
                rs1_o <= rs1;
                rs2_o <= rs2;
                shamt_o <= shamt;
                instr_mem_data_o <= instr_mem_data;
            end
            else if(stall_en == 1) begin // nop gondermek gerekiyor ekstrem bir durum var src'de readme'ye eklerim bakarsın
                instr_o <= 32'h00000013; // nop 
                rs1_o <= 32'b0; // hazard icin
                rs2_o <= 32'b0; // hazard icin
                shamt_o <= 5'b0;
                pc_o <= pc_o;
                instr_mem_data_o<= 32'b0;                 
            end
       end
    end
endmodule

