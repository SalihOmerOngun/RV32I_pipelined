
    Normalde stall olunca decode ve diğer aşamalrdaki çıkışlar tekrar girişe veriliyordu. Ancak aşağadaki ekstrem durumu yani farkettim dual issue yaparken.

		addi x1,x0,100
        sw x1,0(x1)
    	addi x2,x0,100
        addi x8,x0,555
        lw x3,0(x2)
        add x4,x3,444

        bu kodda şöyle bir sıkıntı var :

            lw x3 olup altta rs1 de x3 olunca stall oluyor lw x3 2 defa çıkışa veriliyor totalde. ilk defa pipelined dan çıkışa verildiğinde addi x2'nin 2 altında olduğu için write backden execute forwarding oluyor. Stall yüzünden bir defa da çıkışa lw x3 komutu gittğinde sıkıntı oluyor. Niye oluyor?

                	addi x2,x0,100
                    addi x6,x2,555
                    add x4,x0,x2
                    sub x5,x2,x7
            Mesela kod böyle olunca addi x6 için memoryden execute da forwarding, add x4 için write backden forwarding, sub x5 de register file a negedge de yazıldığı için decoda sorunsuz okuma yapılıyor.


            Ancak bizim en yukarıda kodda. stall yüzünden decode lw x3'ü çıkışa verdiginde x2 registera yazılmış olacak ama sen eski rs1 rs2 yi tekrar çıkışa verdigin için x2'nin eski halini alıyorsun. bunu lw x3 stall olunca giriş instr vererek yapabilirsin ama bu seferde başka sıkıntılar oluyor
            O yüzden nop göndermek gerekiyor stall olunca
            if(stall_en == 0) begin // sadece instr_o<= instr yapmak yetmez. instr yenilendiği için rs1 rs2(decode içinde olup output a verilen) ler değisecek
                instr_o <= instr; 
                pc_o <= pc_i;
                rs1_o <= rs1;
                rs2_o <= rs2;
                shamt_o <= shamt;
                instr_mem_data_o <= instr_mem_data;   
                    
                    