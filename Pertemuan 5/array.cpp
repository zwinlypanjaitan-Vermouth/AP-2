#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
  //Array declaration & initialitation
  //2 cara membuat array

  //cara 1 : array kosong
//   string nama[5];
//   nama[0] = "Zwinly";
//   nama[1] = "Dewi";
//   nama[2] = "Hans";
//   nama[3] = "Daniel";
//   nama[4] = "Parul";

  //cara 2 : langsung diisi
//   string nama[5] = {"Zwinly", "Dewi", "Hans", "Daniel", "Parul"};
//   string nama[] = {"Zwinly", "Dewi", "Hans", "Daniel", "Parul"};

  //Menampilkan data dalam array
//   cout << nama[0] << endl;
//   cout << nama[4] << endl;

  //Menggunakan Looping ascending
//   for (int i = 0; i < 5; i++)
//   cout << nama[i] << endl;

  //Descending
//   for (int i = 4; i >= 0; i--)
//   cout << nama[i] << endl;

// Multidimensional Array
  // 1 2 3
  // 4 5 6
//   int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
//   for(int i = 0; i < 2; i++){
//     for(int j = 0; j < 3; j++){
//         cout << matrix[i][j] << " ";
//     }
//     cout << endl;
//   }

  // string (array of char)
//   string nama = "Zwinly";
//   cout << nama[0] << endl;
//   cout << nama[2] << endl;

//   cout << nama.length();// untuk memnghitung jumlah karakter

// string s1 = "Hello";
// string s2 = "World";

// //1. s1 = s2
// s1 = s2;
// cout << "s1 sekarang = " << s1 << endl;

// //2. s1 = s1 + 2
// s1 = "Hello";// reset nilai
// cout << "Hasil Gabungan = " << s1 + s2 << endl;

// //3. s1/Length()
// cout << s1.length() << endl;//5
// cout << (s1 + s2).length() << endl;//10

// //4. s1.substrin(n, m) n itu mulai dari berapa, m i panjang berapa
// cout << s1.substr(2, 3) << endl;


   // operator sizeof
//    int angka = 10;
//    cout << sizeof(angka);

//    int nilai[] = {10, 20, 30, 40, 50};
//    cout << sizeof(nilai);


   //Array Library
   //misal array biasa : float nilai[5]
//    array<float,5> nilai = {87.5, 90, 100, 95.7, 78.3};
//    cout << "Nilai : ";

//    for (int i = 0; i < nilai.size(); i++){
//     cout << nilai[i] << " ";
//    }
  
   




  }