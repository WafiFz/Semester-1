/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 25 November 2020 
deskripsi: -Tugas 1- 
			Program untuk menghitung jumlah karakter tertentu
*/


#include <iostream>
#include <fstream>
using namespace std;

int periksaFile(char nFile[]);
int jumlahKarakter(char nFile[], char karakter);
void input(char nFile[]);
void output(char nFile[]);

int main(){
	char namaFile[100];
	input(namaFile);
	output(namaFile);
}

void input(char nFile[]){
	cout << "\n-PROGRAM HITUNG KARAKTER-\n\n";
	cout << "Nama file [tulis dengan .txt]: "; cin.getline(nFile, 100);
}

int periksaFile(char nFile[]){
	int periksa;
	ifstream fileText;
	fileText.open(nFile);
	if(fileText.fail()){
		periksa = 0;
	}else {
		periksa = 1;
	}
	fileText.close();
	return periksa;
}

int jumlahKarakter(char nFile[], char karakter){
	char isiFile, opposite;
	int jmlhKarakter=0;
	ifstream fileTeks;
	fileTeks.open(nFile);
	if (isupper(karakter)){
		opposite = karakter+32;
	}else if (islower(karakter)){
		opposite = karakter-32;
	}
	while(!fileTeks.eof()){
		fileTeks.get(isiFile);
		if((isiFile == karakter || isiFile == opposite) && (!fileTeks.eof())){
			jmlhKarakter += 1;
		}
	}
	fileTeks.close();
return jmlhKarakter;
}

void output(char nFile[]){
	char karakter;
	if (periksaFile(nFile) == 1){
		cout << "\nFile " << nFile << " ditemukan" << endl;
		cout << "Karakter yang dicari         : "; cin >> karakter;
		cout << "Jumlah karakter yang dicari  : " << jumlahKarakter(nFile, karakter);
		cout << endl;
	} else {
		cout << "File " << nFile << " tidak ditemukan" << endl;
	}
}