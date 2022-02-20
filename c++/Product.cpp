#include <iostream>
#include <string>

using namespace std;

class Product
{
    private:
        /* atribut private */
        int price;
        string idProduct;
    
    public:
        // constructor
        Product(){
        }

        // constructor dengan parameter
        Product(int p, string idP){
            /* Mengisi class Product */
            price = p;
            idProduct = idP;
        }

        //membuat getter dan setter
        void setPrice(int p){
            price = p;
        }

        int getPrice(){
            return price;
        }

        void setIdProduct(string idP){
            idProduct = idP;
        }

        string getIdProduct(){
            return idProduct;
        }

        //prosedur untuk memnampilkan atribut kelas
        void showProduct(){
            cout << "ID Product    : " << idProduct << endl;
            cout << "Price         : Rp. " << price << endl;
        }



        ~Product();
};
