#include <iostream>
using namespace std;
int main()
{
    int nilai;
    system("CLS");
    cout << "Masukkan nilai : ";
    cin >> nilai;
    
    //if else statement
    // if(nilai <= 65)
    // {
    //     cout << "Kamu tidak Lulus" << endl;
    // }
    // else
    // {
    //     cout << "Kamu Lulus" << endl;
    // }

    // if else if statement
    // if(nilai == 100)
    // {
    //     cout << "Anda Keceh" << endl;
    // }
    // else if(nilai <= 65){
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else{
    //     cout << "Anda Lulus" << endl;
    // }

    // Nested if statement
    // if(nilai <= 65)
    // {
    //     cout << "Anda tidak lulus" << endl;
    // }
    // else
    // {
    //     if(nilai == 100)
    //     {
    //     cout << "Anda lulus dan anda hebat" << endl;
    //     }
    //     else
    //     {
    //         cout << "Anda lulus" << endl;
    //     }
    // }

    // switch case statement
    // switch(nilai){
    //     case 1: cout << "senin" << endl;
    //     break;
    //     case 2: cout << "selasa" << endl;
    //     break;
    //     case 3: cout << "rabu" << endl;
    //     break;
    //     case 4: cout << "kamis" << endl;
    //     break;
    //     case 5: cout << "jumat" << endl;
    //     break;
    //     case 6: cout << "sabtu" << endl;
    //     break;
    //     case 7: cout << "minggu" << endl;
    //     break;
    //     default : cout << "Inputan salah" << endl;
    // }

    //switch range case statement
    // switch(nilai)
    // {
    //     case 85 ... 100 : cout << "Nilai A" << endl; break;
    //     case 80 ... 84 : cout << "Nilai B+" << endl; break;
    //     case 75 ... 79 : cout << "Nilai B" << endl; break;
    //     case 70 ... 74 : cout << "Nilai C+" << endl; break;
    //     case 65 ... 69 : cout << "Nilai C" << endl; break;
    //     case 60 ... 64 : cout << "Nilai D" << endl; break;
    //     default : cout << "Inputan Salah" << endl; break;
    // }

    // Ternanry operator
    // if(nilai % 2 == 0){
    //     cout << "nilai genap" << endl;
    // }
    // else
    // {
    //     cout << "nilai ganjil" << endl;
    // }

    (nilai % 2 == 0) ? cout << "Nilai genap" << endl : cout << "Nilai ganjil" << endl; 


    
}