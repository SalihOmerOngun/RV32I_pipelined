
    Normalde stall olunca decode ve diğer aşamalrdaki çıkışlar tekrar girişe veriliyordu. Ancak aşağadaki ekstrem durumu yani farkettim dual issue yaparken.

06400093
0010a023
06400113
22b00413
00012183
1bc18213

		addi x1,x0,100
        sw x1,0(x1)
    	addi x2,x0,100
        addi x8,x0,555
        lw x3,0(x2)
        add x4,x3,444

        bu kodda şöyle bir sıkıntı var :

        stall olunca decode'dan 2 defa lw x3 çıkıyor. ilk decode çıkışında aynı anda memory'den addi x2 çıkıyor. ancak sonraki çıkışlarda memory'den diğer komutlar çıkıyor. 
        instr_decode[19:15] == instr_memory[11:7] hazardda böyle bir komut var. bu ilk çıkışta algılanıyor ve forward oluyor ancak sonraki çıkışlarda böyle bir şey yok. o yüzden forward işlemi olmuyor. o yüzden yanlış değer dönüyor. bu sebeple stall_en için decode da nop ver.

![alt text](image-1.png)