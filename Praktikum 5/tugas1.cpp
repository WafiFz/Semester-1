/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 Oktober 2020 
deskripsi: -Tugas 1- 
			Membuat asterik dengan
			menginputkan jumlah baris
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "\n=====PROGRAM ASTERIK=====\n" << endl;
	cout << "Input Jumlah Baris : ";
	cin >> n;
	
	cout << "---Pola 1---\n";
	for (int p = 1; p <= n; p++) {
		for (int q = 1; q <= p; q++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n---Pola 2---\n";
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < x; y++) {
			cout << " ";
		}
		for (int z = n; z > x; z--) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n---Pola 3---\n" << endl;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++)
		{
			if (i == j || i+j == n+1){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}	