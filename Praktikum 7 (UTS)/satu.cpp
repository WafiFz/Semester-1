/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 21 Oktober 2020 
deskripsi: -Soal 1.1-
*/

#include <iostream>
using namespace std;

	int main() {
	int n;
	cout << "\n=====PROGRAM ASTERIK=====\n" << endl;
	cout << "Input Jumlah Baris : ";
	cin >> n;
	
	for (int p = 1; p <= n; p++) {
		for (int q = 1; q <= p; q++) {
			cout << "*";
		}
		cout << endl;
	}
}

