/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 30 September 2020 
deskripsi: -Tugas 1- 
*/
#include <iostream>
using namespace std;

int main(){
    
    int aritmatika, satu, dua;
    cout << "\n1. Kali \n2. bagi"; 
    cout << "\n3. tambah \n4. kurang"<< endl;
    cout << "-------------------" << endl;
    cout << "Pilihan\t: ";
    cin >> aritmatika;
    cout << "Bilangan ke-1\t  : ";
    cin >> satu;
    cout << "Bilangan ke-2\t  : ";
    cin >> dua;
    
    switch (aritmatika)
    {
    case 1 :
        cout << "\nHasil = " << satu * dua << endl;
        break;
    case 2 :
        cout << "\nHasil = " << satu / dua << endl;
        break;
    case 3 :
        cout << "\nHasil = " << satu + dua << endl;
        break;
    case 4 :
        cout << "\nHasil = " << satu - dua << endl;
        break;
    }
}