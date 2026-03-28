#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;
    char huruf;
    system("CLS");

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    for (i = 0; i < kalimat.length(); i++) {
        huruf = kalimat[i];
        if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
            kalimat[i] = toupper(huruf);
        }
    }
    cout << "kalimat yang huruf vokal nya kapital adalah : " << kalimat << endl;
    
    return 0;
}