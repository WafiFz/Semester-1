/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 27 September 2020 
deskripsi: -Tugas 1- 
*/
#include <iostream>
using namespace std;

int main(){
    
    int pilih, banyak;
    cout << "\nMenu Makan \n1. Nasi Goreng \n2. Indomie Goreng"; 
    cout << "\n3. Kwetiaw Goreng \n4. Kerupuk Goreng"<< endl;
    cout << "-------------------" << endl;
    cout << "Pilih\t  : ";
    cin >> pilih;
    
    switch (pilih)
    {
    case 1 :
        cout << "Banyaknya : ";
        cin >> banyak;
        cout << "-------------------" << endl;
        cout << "Nasi Goreng sebanyak " << banyak << " porsi\n";
        break;
    case 2 :
        cout << "Banyaknya : ";
        cin >> banyak;
        cout << "-------------------" << endl;
        cout << "Indomie Goreng sebanyak " << banyak << " porsi\n";
        break;
    case 3 : 
        cout << "Banyaknya : ";
        cin >> banyak;
        cout << "-------------------" << endl;
        cout << "Kwetiaw Goreng sebanyak " << banyak << " porsi\n";
        break;
    case 4 : 
        cout << "Banyaknya : ";
        cin >> banyak;
        cout << "-------------------" << endl;
        cout << "Kerupuk Goreng sebanyak " << banyak << " porsi\n";
        break;
    default:
        cout << "Silakan Pilih Angka 1 - 4";
        break;cout << "-------------------" << endl;
    }
}