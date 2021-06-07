/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal : 11 Oktober 2020 
deskripsi: -Contoh 1- 
			Penggunaan for loop
*/

#include <iostream>
using namespace std;

int main(){
	int angka;
	for (int i = 0; i < 4; i++){
		cout << "Pengulangan terjadi sebanyak " << i+1 << endl;
	}
	cout << endl;
	for (int i = 3; i > 0; i--){
	cout << i << endl;
	}
	cout << endl;
	for (int i = 10; i >= 0; i -= 2){
	cout << i << " ";
	}
}