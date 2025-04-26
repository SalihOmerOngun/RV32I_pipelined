SORU : write back için hazard da bir atama yapmaya gerk var mı zaten reg_file düşen kenarda yapmıyor mu 
write backden decode ksımına gidiyorsa sıkıntı yok atama yapma.Çünkü decode da reg_den okuma yağıyor.
eğer write_back'den execute gidiyorsa okuma yapmadığı için execute da rs1_hazard = alu_out yapmak gerekiyor
