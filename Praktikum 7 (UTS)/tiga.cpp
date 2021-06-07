/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 21 Oktober 2020 
deskripsi: -Soal 1.3-
*/

#include <iostream>
using namespace std;
int main() {
	int n, f = 1, x;
	cout << "Masukkan bilangan bulat positif : "; cin >> n;
	x = n;
	do {
		f *= n;
		n--;
	} while (n >= 1);
	cout << x << " Faktorial adalah : " << f << endl;
	}