#include <iostream>
#include<conio.h>
using namespace std;
int main(){
    string nama;
    char kom,jeniskelamin;
    int nim;
    float ip;

    cout <<"heloo world"<< endl;
    cout <<"Masukkan nama :" ;
    getline(cin,nama);
    cout <<"Masukkan kom :" ;
    cin>> kom;
    cout <<"Masukkan nim :";
    cin>> nim;
    cout <<"Masukkan ip :";
    cin>>ip;
     cout <<"masukkan jenis kelamin (L/P) :";
     cin >> jeniskelamin;
     jeniskelamin = getche();

    cout <<"\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
     putchar(jeniskelamin);
     getch();
}