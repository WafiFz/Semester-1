/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 27 September 2020 
deskripsi: -contoh 1- operator logika
*/
#include <iostream>
using namespace std;

int main()
{
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;

    if (angka == 2 || angka == 3){
    	cout << "Angka adalah 2 atau 3";
    }

    if (angka % 2 == 0 && angka % 6 == 0){
    	cout << "Angka habis dibagi 6";
    }
}