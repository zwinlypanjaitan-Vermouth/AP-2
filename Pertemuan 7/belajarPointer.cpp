#include <iostream>
using namespace std;

int main(){
    system("CLS");

    //Pointer declaration
    int number = 35;
    int *pointer_number = &number;

    cout << "Isi Variabel Number = " << number << endl;
    cout << "Alamat dari Variabel Number = " << &number << endl;
    cout << "Isi Variabel pointer_number = " << pointer_number << endl;
    cout << "Isi Variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = "<< &pointer_number << endl;


}