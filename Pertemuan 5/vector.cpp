#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector Declaration & Inilitation
    vector<string> nama_karyawan = {"Zwinly", "Dimas", "daniel", "Parul", "Joseph"};

    //Menampilkan data ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    // Add data to vector
    nama_karyawan.push_back("Edric");

    //Menampilkan data ascending
    // for(int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i] << endl;
    // }

    //Delete data from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 2);

    for(int i = 0; i < nama_karyawan.size(); i++){
         cout << nama_karyawan[i] << endl;
     }
}