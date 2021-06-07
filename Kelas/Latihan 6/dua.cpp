/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 15 Oktober 2020 
deskripsi: -2- Cetak Angka Terbalik
*/

#include <iostream>
using namespace std;
	int main() {
	int angka, terbalik = 0, batas;
	cout << "\n=====PROGRAM CETAK TERBALIK=====\n";
	cout << "Masukkan Angka Yang Akan Dibalik : ";
	cin >> angka;
	while (angka != 0){
		batas = angka % 10;
		terbalik = terbalik * 10 + batas;
		angka /= 10;
	}
cout << "--------------------------------" << endl;	
cout << "Kebalikannya adalah\t\t : " << terbalik;
cout << endl;
return 0;
}