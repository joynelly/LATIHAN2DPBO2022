public class Main {

    public static void main(String[] args) {

        System.out.println("\nLATIHAN 2 DPBO - MULTILEVELS INHERITANCE");
        System.out.println("==========================================");

        /**data akan ditampilkan 3 kali, dimulai dari data yang variabelnya mengunakan
         * kelas paling atas hingga paling bawah*/
        
        //menampilkan data yang menggunakan kelas pertama
        //jadi tidak bisa menggunakan atribut kelas turunannya
        System.out.println("\nMenampilkan contoh kelas Product");
        Product produk1;
        produk1 = new Product(570000, "LAT2DPBO2022");
        produk1.showProduct();

        System.out.println("\nMenampilkan contoh kelas Hardware");
        Hardware hard1;
        hard1 = new Hardware("NVIDIA", "GTX760");
        hard1.setPrice(570000);
        hard1.setIdProduct("LAT2DPBO2022");
        hard1.showProduct();
        hard1.showHardware();

        System.out.println("\nMenampilkan contoh kelas Memory");
        Memory memori1;
        memori1 = new Memory("980MHz", "6Gb", "Yes");
        memori1.setBrand("NVIDIA");
        memori1.setModel("GTX760");
        memori1.setPrice(570000);
        memori1.setIdProduct("LAT2DPBO2022");
        memori1.showProduct();
        memori1.showHardware();
        memori1.showMemory();




    }
}