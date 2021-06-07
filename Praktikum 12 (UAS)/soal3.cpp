/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 9 Desember 2020 
deskripsi: -Soal 3- 
*/

#include <iostream>
using namespace std;

int main(){
	int a = 2, b = 2;
	int x[100][100], y[100][100], hasilTambah[100][100];

	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Masukkan Elemen A [" << i+1 <<"," << j+1 << "] : ";
			cin >> x[i][j];
		}
	}

	cout << endl;
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Masukkan Elemen B [" << i+1 <<"," << j+1 << "] : ";
			cin >> y[i][j];
		}
	}

	cout << "\nHasil Penjumlahan: \n";
	for (int i = 0; i < a; i++){
		cout << "[  ";
		for (int j = 0; j < b; j++){
			hasilTambah[i][j] = x[i][j] + y[i][j];
			cout << hasilTambah[i][j] << "  ";
		}
		cout << "]" << endl;
	}
}

