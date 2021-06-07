/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 30 September 2020 
deskripsi: -Nomor 5- 
*/

#include <iostream>
using namespace std;

int main(){

float mtk, ipa;
string nama;

cout << "\nNama             = ";
cin >> nama;
cout << "Nilai Matematika = ";
cin >> mtk;
cout << "Nilai IPA        = ";
cin >> ipa;

if (mtk > 60 && ipa > 70){
	cout << "\nSiswa dengan nama " << nama << " dinyatakan lulus ujian.\n";
} else if (ipa > 0 && mtk > 0){
	cout << "\nSiswa dengan nama " << nama << " dinyatakan tidak lulus ujian.\n";
} else {
	cout << "\nInput yang anda masukkan salah\n";
}
}