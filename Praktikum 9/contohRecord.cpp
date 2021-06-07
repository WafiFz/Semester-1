/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Contoh Record- 
*/

#include <iostream>
using namespace std;

struct ktp{
	int nik;
	char nama[100];
	int tahunLahir;
};

int main(){
	ktp ktpOrang;
	cout << "NIK : "; cin >> ktpOrang.nik;
	cout << "Nama : "; cin >> ktpOrang.nama;
	cout << "Tahun Lahir : "; cin >> ktpOrang.tahunLahir;

	cout << "NIK : " << ktpOrang.nik << endl;
	cout << "Nama : " << ktpOrang.nama << endl;
	cout << "Tahun Lahir : " << ktpOrang.tahunLahir << endl;
}	