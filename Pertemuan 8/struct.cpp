#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main(){
    system("CLS");

     Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Aster 1";
    // mhs1.alamat.kota = "Helvetia";
    // mhs1.alamat.kodepos = 114014;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahsiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa "<< i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i < n; i++){
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }

}