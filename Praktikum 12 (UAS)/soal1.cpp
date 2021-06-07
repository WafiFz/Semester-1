/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 9 Desember 2020 
deskripsi: -Soal 1- 
*/

#include <iostream>
using namespace std;

float luas_persegi(float x){
	float persegi;
	persegi = x*x;
	return persegi;
}

float luas_persegi_panjang(float x, float y){
	float persegiPanjang;
	persegiPanjang = x*y;
	return persegiPanjang;
}

float luas_lingkaran(float r){
	float lingkaran;
	float pi = 3.14;
	lingkaran = pi * r * r;
	return lingkaran;
}

int main(){
	cout << "Luas Persegi 		: " << luas_persegi(5.5) << endl;
	cout << "Luas Persegi Panjang 	: " << luas_persegi_panjang(1.2, 5.5) << endl;
	cout << "Luas Lingkaran 		: " << luas_lingkaran(5.5) << endl;
}

