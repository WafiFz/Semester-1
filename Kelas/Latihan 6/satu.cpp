/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 15 Oktober 2020 
deskripsi: -1- Bilangan Prima
*/

#include <iostream>
using namespace std;

int main() {
int angka, hasil = 1;
	cout << "\n===PROGRAM BILANGAN PRIMA===\n";
	cout << "Input Angka : ";
	cin >> angka;
	cout << endl;

	for (int i = 2; i < angka; i++){
		if (angka % i == 0){
			hasil = 0;
		}
	}
	
	if (hasil != 0){
		cout << angka << " Merupakan Bilangan Prima\n\n";
	} else {
		cout << angka << " Bukan Bilangan Prima\n\n";
	}
}