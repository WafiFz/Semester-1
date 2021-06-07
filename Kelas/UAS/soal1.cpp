/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 10 Desember 2020 
deskripsi: -Soal 1- 
*/

#include <iostream>
using namespace std;

void kalkulator(float x, float y){
	float tambah, kurang, kali, bagi;
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;

	cout << tambah << endl;
	cout << kurang << endl;
	cout << kali << endl;
	cout << bagi << endl;
}

int main(){
	float x, y;
	cin >> x;
	cin >> y;
	kalkulator(x, y);

}

