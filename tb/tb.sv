`timescale 1 ns / 1 ps

module tb ();
     logic [riscv_pkg::XLEN-1:0] addr;
     logic [riscv_pkg::XLEN-1:0] data;
     logic [riscv_pkg::XLEN-1:0] pc;
     logic [riscv_pkg::XLEN-1:0] instr;
     logic [                4:0] reg_addr;
     logic [riscv_pkg::XLEN-1:0] reg_data;
     logic [riscv_pkg::XLEN-1:0] mem_addr;
     logic [riscv_pkg::XLEN-1:0] mem_data;     
     logic                       update;
     logic                       mem_wrt;
     logic clk;
     logic rstn;
     logic stall_f_d;
     logic stall_excte;
     logic stall_mem;
     logic stall_wb;
 
     riscv_multicycle i_core_model(
         .clk_i(clk),
         .rstn_i(rstn),
         .addr_i(addr),
         .update_o(update),
         .data_o(data),
         .pc_o(pc),
         .instr_o(instr),
         .reg_addr_o(reg_addr),
         .reg_data_o(reg_data),
         .mem_addr_o(mem_addr),
         .mem_data_o(mem_data),
         .mem_wrt_o(mem_wrt)
     );
        integer file_pointer;   
        initial begin
            file_pointer = $fopen("model.log", "w");
            #2; // resette iken yazmıyor 
            if(instr!=32'h00000000) begin
                $fdisplay(file_pointer, "0x%8h (0x%8h)", pc, instr);   // 4 ns delay gelince clk vuruyor pc 80000004 oluyor. 80000000 olması icin buraya ekledim         
            end
            #2;        
            forever begin
                if (update) begin
                    if (reg_addr == 0 && instr!=32'h00000000 && stall_mem == 0) begin // flush da yazmaması için instr ekledim
                        if(mem_wrt == 1)begin
                            $fdisplay(file_pointer, "0x%8h (0x%8h) data_memory x%0d  0x%8h",pc, instr, mem_addr, mem_data);
                        end
                        else begin
                             $fdisplay(file_pointer, "0x%8h (0x%8h)", pc, instr);
                        end
                    end else if(instr!=32'h00000000 && stall_mem == 0) begin //flush da yazmaması için instr ekledim
                        if (reg_addr>9) begin
                            $fdisplay(file_pointer, "0x%8h (0x%8h) x%0d 0x%8h", pc, instr, reg_addr, reg_data);
                        end else begin
                            $fdisplay(file_pointer, "0x%8h (0x%8h) x%0d  0x%8h", pc, instr, reg_addr, reg_data);
                        end 
                    end
                    #2;
                end
            end
        end
        initial forever begin
            clk = 0;
            #1;
            clk = 1;
            #1;
        end
        initial begin
            rstn = 0;
            #2;
            rstn = 1;
            //#10000;
            #4000;
            for (int i=0; i<10; i++) begin
                addr = i;
                $display("data @ mem[0x%8h] = %8h", addr, data);
            end
            $finish;
        end
 
        initial begin 
            forever begin
                stall_f_d = 0;
                stall_excte = 0;
                stall_mem = 0;
                stall_wb = 0;
                wait (i_core_model.stall_en == 1)
                    #2;
                    stall_f_d = 1;
                    #2;
                    stall_excte = 1;
                    stall_f_d = 0;
                    #2;
                    stall_mem = 1;
                    stall_excte = 0;
                    #2;
                    stall_wb = 1;
                    stall_mem = 0;
                    #2;
            end
        end


        integer pipe_pc;
        initial begin
            pipe_pc = $fopen("pipe.log", "w");
            $fdisplay(pipe_pc, "Fetch          Decode         Execute        Memory         Write Back\n");
            #1;
            forever begin
               @(posedge clk);
               if(i_core_model.instr_fetch == 32'h00000000 && i_core_model.pc_fetch != 32'b0) begin // resette iken de instr = 0 oluyor. o yuzden pc ekledim.
                    $fwrite(pipe_pc,"FLUSHED        "); // $fdisplay() her yazacağını bir alt satıra yazıyor 
               end 
               else begin
                    if(stall_f_d == 1) begin
                        $fwrite(pipe_pc,"STALLED        ");
                        $display("stalled x%0d",stall_f_d);
                    end
                    else begin
                        $fwrite(pipe_pc,"0x%8h     ", i_core_model.pc_fetch); 
                        $display("not stalled x%0d",stall_f_d);
                    end
               end 
               if(i_core_model.instr_decode == 32'h00000000 && i_core_model.pc_decode != 32'b0) begin
                    $fwrite(pipe_pc,"FLUSHED        ");
               end 
               else begin
                    if(stall_f_d == 1) begin
                        $fwrite(pipe_pc,"STALLED        ");
                    end
                    else begin
                        $fwrite(pipe_pc,"0x%8h     ", i_core_model.pc_decode); 
                    end
               end                
               if(i_core_model.instr_excte == 32'h00000000 && i_core_model.pc_excte != 32'b0) begin
                    $fwrite(pipe_pc,"FLUSHED        ");
               end 
               else begin
                    if (stall_excte == 1) begin
                        $fwrite(pipe_pc,"STALLED        ");
                    end
                    else begin
                        $fwrite(pipe_pc,"0x%8h     ", i_core_model.pc_excte); 
                    end
               end                
               if(i_core_model.instr_memory == 32'h00000000 && i_core_model.pc_memory != 32'b0) begin
                    $fwrite(pipe_pc,"FLUSHED        ");
               end 
               else begin
                    if (stall_mem == 1) begin
                        $fwrite(pipe_pc,"STALLED        ");
                    end
                    else begin 
                        $fwrite(pipe_pc,"0x%8h     ", i_core_model.pc_memory); 
                    end 
               end                
               if(i_core_model.wrt_bck_inst.instr_o == 32'h00000000 && i_core_model.wrt_bck_inst.pc_o != 32'b0) begin
                    $fwrite(pipe_pc,"FLUSHED        ");
               end 
               else begin
                    if (stall_wb == 1) begin
                        $fwrite(pipe_pc,"STALLED        ");
                    end
                    else begin 
                        $fwrite(pipe_pc,"0x%8h     ", i_core_model.wrt_bck_inst.pc_o); 
                    end 
               end                
               $fwrite(pipe_pc, "\n"); 
            end
        end


        initial begin
        $dumpfile("dump.vcd");
        $dumpvars();
        end
 endmodule
