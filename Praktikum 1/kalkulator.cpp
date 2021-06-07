/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 9 September 2020
deskripsi: -Kalkulator- menjumlah, mengurang, 
mengali, membagi 2 buah input.
*/

#include <iostream>
using namespace std;

int main() {

	float a, b, kali, bagi, tambah, kurang;

	cout << "\n===Selamat datang di Program Kalkulator===\n\n";

	//masukan input dari user 
	cout << "Masukan nilai pertama: ";
	cin >> a;
	cout << "Masukan nilai kedua  : ";
	cin >> b;
	//operasi
	tambah = a+b;
	kurang = a-b;
	kali = a*b;
	bagi = a/b;
	
	//output
	cout << "\nHasil Perhitungan: " <<endl;
	cout << a << " + " << b << " = " << tambah << endl;
	cout << a << " - " << b << " = " << kurang << endl;
	cout << a << " * " << b << " = " << kali << endl;
	cout << a << " / " << b << " = " << bagi << endl;
	
	cout << "\n======Program Selesai======" << endl;

	cin.get();
	return 0;
}