#include <iostream>
using namespace std;

class contohAkses {
    private:
      int privateVar;
    
    protected:
      int protectedVar;
      
    public:
      int publicVar;
      
    // Costractor
    contohAkses(){
     privateVar = 1;
     protectedVar = 2;
     publicVar = 3;
    }
    void tampilkanSemua(){
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// inheritance (pewarisan), class turunan
class Turunan : public contohAkses {
    public:
    void aksesprotected(){
        // cout << privateVar << endl; // error
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

int main(){
    contohAkses obj;
    obj.tampilkanSemua();

    cout << "\n Akses dari luar class : " << endl;
    // cout << obj.privateVar << endl; //error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl; 

    cout << "\n Akses dari kelas turunan : " << endl;
    Turunan tur;
    tur.aksesprotected();


}