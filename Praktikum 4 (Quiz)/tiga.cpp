/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 30 September 2020 
deskripsi: -Nomor 3- 
*/

#include <iostream>
using namespace std;

int main(){
	int angka, menit, detik;

	cout << "\ninput : ";
	cin >> angka;

	menit = angka / 60;
	detik = angka % 60;

	cout << menit << "m, " << detik << "s";
	cout << endl;
}