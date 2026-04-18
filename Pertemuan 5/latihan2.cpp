#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<string> nama = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    cout << "Isi vector awal:" << endl;
    for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
    nama.push_back("Houra");
    nama.pop_back();
    nama.erase(nama.begin() + 1);

    cout << "Isi vector setelah perubahan:" << endl;
   for (int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
   }
    cout << "Jumlah data tersisa: " << nama.size() << endl;
    return 0;

}