from Product import Product
from Hardware import Hardware
from Memory import Memory

print("\nLATIHAN 2 DPBO - MULTILEVELS INHERITANCE")
print("========================================")

# instansiasi tiap variabel
produk1 = Product()
hard1 = Hardware()
memori1 = Memory()

# Membuat isi atrubut dengan kelas produk dan menampilkannya
produk1.setIdProduct("LAT2DPBO2022")
produk1.setPrice(570000)
print("\nMenampilkan contoh kelas Product")
produk1.showProduct()

# Membuat isi atribut dari kelas Hardware dan menampilkannya
# Kelas hardware memiliki atrubut kelas Produck karena merupakan turunannya
hard1.setIdProduct("LAT2DPBO2022")
hard1.setPrice(570000)
hard1.setBrand("NVIDIA")
hard1.setModel("GTX760")
print("\nMenampilkan contoh kelas Hardware")
hard1.showProduct()
hard1.showHardware()

# Membuat isis atribut dari kelas Memory dan menampilkannya
# Kelas Memory memiliki atribut dari kelas Hardware dan Product
memori1.setIdProduct("LAT2DPBO2022")
memori1.setPrice(570000)
memori1.setBrand("NVIDIA")
memori1.setModel("GTX70")
memori1.setFrequency("980MHz")
memori1.setMemorySize("6Gb")
memori1.setSupportsCuda("Yes")
print("\nMenampilkan contoh kelas Memory")
memori1.showProduct()
memori1.showHardware()
memori1.showMemory()