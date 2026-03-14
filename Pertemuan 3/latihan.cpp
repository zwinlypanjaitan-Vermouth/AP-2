#include <iostream>
using namespace std;
int main()
{
    int berat;
    float bmi, tinggi;
    system("CLS");

    cout << "Masukkan berat badan anda : ";
    cin >> berat;
    cout << "Masukkan tinggi badan anda : ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    if(bmi < 18.5)
    {
    cout << "Berat badan kurang" << endl;
    }
    else if(bmi >= 18.5 && bmi < 25) 
    {
    cout << "Berat badan normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout << "Berat badan berlebih" << endl;
    }
    else if(bmi >= 30)
    {
        cout << "Obesitas" << endl;
    }
    else{
        cout << "Input salah" << endl;
    }

     cout << "BMI kamu adalah " << bmi << endl;
    
    
}





