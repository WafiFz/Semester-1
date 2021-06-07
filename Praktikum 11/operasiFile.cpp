/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 25 November 2020 
deskripsi: -Operasi File- 
*/

#include <iostream>
#include <fstream>
using namespace std;

void bukaTulisIsiFile(char nFile[]);
void tambahIsiFile(char nFile[], char isi[]);
void periksaFile(char nFile[]);
void isiFilePerKarakter(char nFile[]);
void cetakIsiFilePerKarakter(char nFile[]);
int cariJumlahHurufA(char nFile[]);

int main(){
	char namaFile[] = "operasiFile.txt";
	char isi[] 		= "Hello Jatinangor!";

	bukaTulisIsiFile(namaFile);
	tambahIsiFile(namaFile, isi);
	periksaFile(namaFile);
	isiFilePerKarakter(namaFile);
	cetakIsiFilePerKarakter(namaFile);
	cout << "\nJumlah huruf A = " << cariJumlahHurufA(namaFile)
		 << endl;

}

void bukaTulisIsiFile(char nFile[]){
	ofstream fileteks;
	fileteks.open(nFile);
	fileteks << "Hello World!" << endl;
	fileteks.close();
}

void tambahIsiFile(char nFile[], char isi[]){
	ofstream fileteks;
	fileteks.open(nFile, ios::app);
	fileteks << "Hello Unpad!" << endl;
	fileteks << isi << endl;
	fileteks.close();
}

void periksaFile(char nFlile[]){
	ifstream fileteks;
	if (fileteks.fail()){
		cout << "File tidak dapat ditemukan" << endl;
	} else {
		cout << "File dapat ditemukan" << endl;
	}
	fileteks.close();
}

void isiFilePerKarakter(char nFile[]){
	ofstream fileteks;
	fileteks.open(nFile);
	fileteks.put('A');
	fileteks.put('B');
	fileteks.put('C');
	fileteks.close();
}

void cetakIsiFilePerKarakter(char nFile[]){
	char karakter;
	ifstream fileteks;
	fileteks.open(nFile);
	while (!fileteks.eof()){
		fileteks.get(karakter);
		cout << karakter;
	}
	fileteks.close();
}

int cariJumlahHurufA(char nFile[]){
	char karakter;
	int jumlahA = 0;
	ifstream fileteks;
	fileteks.open(nFile);
	while(!fileteks.eof()){
		fileteks.get(karakter);
		if (karakter == 'A' || karakter == 'a'){
			jumlahA = jumlahA+1;
		}
	}
	fileteks.close();
	return jumlahA;
}



