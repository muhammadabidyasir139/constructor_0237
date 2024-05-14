#include <iostream>
using namespace std;

class angka{
    private:
        int *arr;
        int panjang;
    public:
        angka(int); //cunstructor
        ~angka(); //destructor
        void cetakData();
        void isiData();
};

//definisi member functon
angka::angka(int i) { //Constructor
    panjang = i;
    arr = new int [i];
    isiData();
}

angka::~angka(){
    cout<<endl;
    cetakData();
    delete[]arr;
    cout << "Alamat Array Dilepaskan" << endl;
}