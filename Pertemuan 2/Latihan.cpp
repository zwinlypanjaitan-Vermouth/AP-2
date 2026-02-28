#include <iostream>
using namespace std;
int main()
{
   float r, volume, luas_permukaan;
   const float phi = 3.14;
   cout << "Masukkan jari jari : ";
   cin >> r;
   
   volume = (4.0/3.0) * phi * r * r * r;
   luas_permukaan = 4 * phi * r * r;

   cout << "Volumenya adalah " << volume << endl;
   cout << "Luas permukaannya adalah " << luas_permukaan << endl;
   
   return 0;

}