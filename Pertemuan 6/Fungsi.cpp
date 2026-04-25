#include <iostream>
using namespace std;

void sapa(string nama){ //nama adalah parameter formal
    cout << "Hallo " << nama << " Selamat Datang di AP 2!" << endl;
}

int main(){
    string namaPengguna = "Zwinly";

    sapa(namaPengguna);//namaPengguna adalah parameter aktual

    return 0;
}