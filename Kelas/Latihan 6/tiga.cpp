/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 15 Oktober 2020 
deskripsi: -3- Cetak Bintang 
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "\n===PROGRAM CETAK BINTANG 1===" << endl;
	cout << "Masukan Panjang Pola : ";
	cin >> n;
	cout << endl;

	cout << "---Hasil Pola---\n";
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

