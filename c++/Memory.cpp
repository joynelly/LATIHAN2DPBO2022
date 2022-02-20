#include "Hardware.cpp"

class Memory : public Hardware
{
    private:
        /* atribut private */
        string frequency;
        string memorySize;
        string supportsCuda;
    public:
        Memory(){
        }

        Memory(string f, string ms, string sc){
            frequency = f;
            memorySize = ms;
            supportsCuda = sc;
        }

        //membuat getter dan setter
        void setFrequency(string f){
            frequency = f;
        }

        string getFrequecy(){
            return frequency;
        }

        void setMemorySize(string ms){
            memorySize = ms;
        }

        string getMemorySize(){
            return memorySize;
        }

        void setSupportsCuda(string sc){
            supportsCuda = sc;
        }

        string getSupportsCuda(){
            return supportsCuda;
        }

        //prosedur menampilkan isi kelas
        void showMemory(){
            cout << "Memory Size   : " << memorySize << endl;
            cout << "Frequency     : " << frequency << endl;
            cout << "Supports Cuda : " << supportsCuda << endl;
        }

        ~Memory();
};