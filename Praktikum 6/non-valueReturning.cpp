/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Non-Value Returning- 
*/

#include <iostream>
using namespace std;


void pangkat (int angka, int& hasil){
	hasil = angka*angka;
}

int main(){
	int angka, hasil;
	cin >> angka;
	pangkat(angka, hasil);
	cout << hasil << endl;
}