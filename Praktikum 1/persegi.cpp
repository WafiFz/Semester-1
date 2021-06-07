/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 9 September 2020
deskripsi: -Luas Persegi- memasukkan panjang 
		   sisi persegi, kemudian menampilkan
	       luas persegi tersebut
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "\n===Selamat datang" ;
	cout << " di Program Mencari Luas Persegi===\n\n";
	//deklarasi
	float s, luas;
	//input sisi (s)
	cout << "Masukkan panjang dari Sisi Persegi: ";
	cin >> s;
	//proses:menghitung dengan rumus
	luas = s * s ;
	//output
	cout << "Luas Persegi: " << luas << endl;
	cout << "\n======Program Selesai======" << endl;
	
	return 0;
}