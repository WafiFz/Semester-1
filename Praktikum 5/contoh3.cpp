/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 Oktober 2020 
deskripsi: -Contoh 3- 
			Penggunaan Do-While
*/

#include <iostream>
using namespace std;
int main() {
	int n, f = 1, x;
	cout << "Masukkan bilangan integer positif : "; cin >> n;
	x = n;
	do {
		f *= n;
		n--;
	} while (n >= 1);
	cout << x << " Faktorial adalah : " << f << endl;
	}