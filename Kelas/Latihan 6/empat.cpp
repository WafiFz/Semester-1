/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 15 Oktober 2020 
deskripsi: -4- Cetak Bintang 
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "\n===PROGRAM CETAK BINTANG 2===" << endl;
	cout << "Masukan panjang pola : ";
	cin >> n;
	cout << endl;

	cout << "---Hasil Pola---\n";
	for (int i = 1; i <= n; i++) {
		for (int k = 1; k < i; k++) {
			cout << " ";
		}
		for (int j = n; j >= (2 * i - n); j--) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= n; i++) {
		for (int k = n; k > i; k--) {
			cout << " ";
		}
		for (int j = 1; j <= (2 * i - 1); j++) {
			cout << "*";
		}
		cout << endl;
	}
}