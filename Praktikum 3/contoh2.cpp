/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 27 September 2020 
deskripsi: -contoh 2- operator kebenaran 
*/

#include <iostream>
using namespace std;

int main(){
	char jawab;

	cout << "Apakah anda yakin? (Y/N)" << endl;
	cin >> jawab;

	if (jawab =='Y' || jawab == 'y'){
		cout << "Anda yakin.";
	}
	else if (jawab == 'N'|| jawab == 'n'){
		cout << "Anda tidak yakin.";
	}
}