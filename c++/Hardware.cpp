#include "Product.cpp"

class Hardware : public Product
{
    private:
        /* atribut private */
        string brand;
        string model;
    public:
        Hardware() {
        }

        Hardware(string b, string m){
            brand = b;
            model = m;
        }

        // membuat getter dan setter
        void setBrand(string b){
            brand = b;
        }

        string getBrand(){
            return brand;
        }

        void setModel(string m){
            model = m;
        }

        string getModel(){
            return model;
        }

        //prosedur menampilkan isi kelas
        void showHardware(){
            cout << "Brand         : " << brand << endl;
            cout << "Model         : " << model << endl;
        }

        ~Hardware();
};
