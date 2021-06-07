/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 20 September 2020 
deskripsi: Nested if 
*/

#include <iostream>
using namespace std;

int main(){
	int angka;

 	cout << "Masukkan angka : ";
 	cin >> angka;

 	if (angka >= 1){
 		if (angka <= 10){
 			cout << "Angka berada di antara 1-10";
 		} else {
 			cout << "Angka diatas 10";
 		}
 	} else {
 		cout << "Input salah / kurang dari angka 1";
 	}
}

