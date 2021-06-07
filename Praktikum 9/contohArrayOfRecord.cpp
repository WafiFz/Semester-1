/*
name     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Contoh Array of Record- 
*/

#include <iostream>
using namespace std;

struct ktp{
	int nik;
	char name[10];
	char ttl[11];
};

int main(){
	ktp ktp[10];
	cout << "NIK\t: "; cin >> ktp[0].nik;
	cout << "Name\t: "; cin >> ktp[0].name;
	cout << "Tempat tanggal lahir\t: "; cin >> ktp[0].ttl;

	cout << "NIK : " << ktp[0].nik << endl;
	cout << "Name : " << ktp[0].name << endl;
	cout << "Tempat tangal lahir : " << ktp[0].ttl << endl;
}	