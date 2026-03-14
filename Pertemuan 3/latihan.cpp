#include <iostream>
using namespace std;
int main()
{
    int berat,tinggi;
    float BMI;
    system("CLS");

    cout << "Masukkan berat badan anda : ";
    cin >> berat;
    cout << "Masukkan tinggi badan anda : ";
    cin >> tinggi;

    BMI = berat / (tinggi * tinggi);
    cout << "BMI kamu adalah " << BMI << endl;

    if(BMI < 18.5)
    {
    cout << "Berat badan kurang" << endl;
    }
    else if(BMI < 25 && BMI >= 18.5) 
    {
    cout << "Berat badan normal" << endl;
    }
    else if (BMI >= 25 && BMI < 30)
    {
        cout << "Berat badan berlebih" << endl;
    }
    else if(BMI >= 30)
    {
        cout << "Obesitas" << endl;
    }
    else{
        cout << "Input salah" << endl;
    }
    
    
}





