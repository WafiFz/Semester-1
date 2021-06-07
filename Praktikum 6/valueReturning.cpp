/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Value Returning- 
*/

#include <iostream>
using namespace std;


int pangkat (int angka){
	return angka*angka;
}

int main(){
	int angka;
	cin >> angka;
	cout << pangkat(angka);
}