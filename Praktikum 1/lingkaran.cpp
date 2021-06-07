/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 9 September 2020
deskripsi: -Luas Lingkaran-memasukkan Jari - Jari lingkaran, 
		   kemudian menampilkan luas lingkaran tersebut
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "\n===Selamat datang di Program" ;
	cout << " Mencari Luas Lingkaran===\n\n";
	//deklarasi
	float pi = 22.0 /7.0, r, luas;
	//input jari-jari
	cout << "Masukan Jari - Jari: ";
	cin >> r;
	//proses:menghitung dengan rumus
	luas = pi * r * r;
	//output
	cout << "Luas Lingkaran     : " << luas << endl;
	cout << "\n======Program Selesai======" << endl;
	
	return 0;
}