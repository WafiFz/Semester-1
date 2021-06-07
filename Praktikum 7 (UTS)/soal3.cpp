
/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 21 Oktober 2020 
deskripsi: -Soal 3-
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "=====PROGRAM SEGITIGA=====\n" << endl;
	cout << "Masukan panjang pola: ";
	cin >> n;
for (int i = 1; i <= n; i++) {
	
		for (int k = n; k > i; k--) {
			cout << " ";
		}

		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}

}