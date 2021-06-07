/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 27 September 2020 
deskripsi: -Switch Case- 
*/

#include <iostream>
using namespace std;

int main(){
	int angka;

	cout << "Masukkan Angka : ";
	cin >> angka;

	switch(angka){
		case 0:
			cout << "Angka nol";
			break;
		case 1:
			cout << "Angka satu";
			break;
		case 2:
			cout << "Angka dua";
			break;
		case 3:
			cout << "Angka tiga";
			break;
		default:
			cout << "Angka kurang dari nol atau lebih dari 3";
			break;

	}
}