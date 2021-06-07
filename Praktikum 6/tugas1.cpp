/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Tugas 1-
			Menghitung Volume
*/

#include <iostream>
using namespace std;

float phi = 22.0/7.0, r, t, s, hasil;

void inputJari(float& r);
void inputTinggi(float& t);
void inputRusuk(float& r);
void volumeKerucut(float& r,float& t,float& hasil);
void volumeSilinder(float& r,float& t,float& hasil);
void volumeBola(float& r, float& hasil);
void volumeKubus(float& s, float& hasil);
void header(string isi);

int main(){
	int menu;
	header("-------MENU-------");
	cout << "1. Volume Kerucut\n";
	cout << "2. Volume Silinder\n";
	cout << "3. Volume Bola\n";
	cout << "4. Volume Kubus\n";
	cout << "------------------\n";
	cout << "Pilih Menu : ";
	cin >> menu;
	cout << endl;

	switch(menu){
		case 1 :
			header("VOLUME KERUCUT");
			inputJari(r);
			inputTinggi(t);
			volumeKerucut(r, t, hasil);
			cout << "------------------\n";
			cout << "Volume Kerucut\t: " << hasil << endl;
			break;

		case 2 :
			header("VOLUME SILINDER");
			inputJari(r);
			inputTinggi(t);
			volumeSilinder(r, t, hasil);
			cout << "------------------\n";
			cout << "Volume Silinder\t: " << hasil << endl;
			break;

		case 3 : 
			header("VOLUME BOLA");
			inputJari(r);
			volumeBola(r, hasil);
			cout << "------------------\n";
			cout << "Volume Bola\t: " << hasil << endl;
			break;

		case 4 :
			header("VOLUME KUBUS");
			inputRusuk(r);
			volumeKubus(s, hasil);
			cout << "------------------\n"; 
			cout << "Volume Kubus\t: " << hasil << endl;
			break;
	}
}

void inputJari(float& r){
	cout << "Input Jari-Jari\t: ";
	cin >> r;
}

void inputTinggi(float& t){
	cout << "Input Tinggi\t: ";
	cin >> t;
}

void inputRusuk(float& r){
	cout << "Input Rusuk\t: ";
	cin >> s;
}

void volumeKerucut(float& r,float& t,float& hasil) {
	hasil = 1.0/ 3.0 * phi * r * r * t; 
}

void volumeSilinder(float& r,float& t,float& hasil) {
	hasil = phi * r * r * t; 
}

void volumeBola(float& r, float& hasil){
	hasil = 4 * phi * r * r * r; 

}

void volumeKubus(float& s, float& hasil){
	hasil = s * s * s;
}

void header(string isi){
	for (int i=1; i<= isi.length(); i++){
		cout << "=";

		if (i == isi.length()){
			cout << endl;
		}
	}

	cout << isi << endl;

	for (int i=1; i <= isi.length(); i++){
		cout << "=";

		if (i == isi.length()){
			cout << endl;
		}
	}
}