#include "Product.cpp"
#include "Hardware.cpp"
#include "Memory.cpp"

int main() {

    cout<<"\nLATIHAN 1b DPBO - MULTILEVELS INHERITANCE"<< endl;
    cout<<"========================================="<< endl;
    
    /*kelas akan ditampilkan 3 kali muali dari kelas yang menggunakan supper class*/

    cout << "\nMenampilkan contoh kelas Product" << endl;
    Product produk1;
    produk1.setIdProduct("LAT2DPBO2022");
    produk1.setPrice(570000);
    produk1.showProduct();

    cout << "\nMenampilkan contoh kelas Hardware" << endl;
    Hardware hard1;
    hard1.setIdProduct("LAT2DPBO2022");
    hard1.setPrice(570000);
    hard1.setModel("GTX760");
    hard1.setBrand("NVIDIA");
    hard1.showProduct();
    hard1.showHardware();

    cout << "\nMenampilkan contoh kelas Memory" << endl;
    Memory memori1;
    memori1.setIdProduct("LAT2DPBO2022");
    memori1.setPrice(570000);
    memori1.setModel("GTX760");
    memori1.setBrand("NVIDIA");
    memori1.setFrequency("980MHz");
    memori1.setMemorySize("6Gb");
    memori1.setSupportsCuda("Yes");
    memori1.showProduct();
    memori1.showHardware();
    memori1.showMemory();

    return 0;
}