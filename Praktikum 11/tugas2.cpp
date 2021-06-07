/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 25 November 2020 
deskripsi: -Tugas 2- 
			Program untuk melakukan enkripsi shift chiper suatu file teks 
*/

#include <iostream>
#include <fstream>
using namespace std;

void input(char nFile[], int& geser);
void periksaFile(char nFile[]);
void shiftChiper(char nFile[], int geser);
void cetakFile(char nFile[]);

int main(){
	char namaFile[100];
	int geser;

	input(namaFile, geser);
	cout << endl;
	cout << "Teks sebelum dienskripsi : "; cetakFile(namaFile);
	shiftChiper(namaFile, geser);
	cout << "Teks setelah dienskripsi : "; cetakFile(namaFile);
	cout << endl;
}

void input(char nFile[], int& geser){
	cout << "\n-PROGRAM ENKRIPSI SHIFT CHIPER-\n";
	cout << "\nMasukkan Nama File       : "; cin.getline(nFile, 100);
	periksaFile(nFile);
	cout << "Input besar pergeseran   : "; cin >> geser;
}	

void periksaFile(char nFile[]){
	ifstream fileteks;
	fileteks.open(nFile);
	if (fileteks.fail()){
		cout << "File " << nFile << " tidak ditemukan" << endl;
		cout << endl;
		exit(0);
	}
	fileteks.close();
}

void shiftChiper(char nFile[], int geser){
	string text;
	ifstream fileInput;
	ofstream fileOutput;
	
	fileInput.open(nFile);
	getline(fileInput, text);
	fileInput.close();
	
	for(int i=0; i<text.size(); ++i) {
		if(text[i] >= 'A' && text[i] <= 'Z'){
			text[i] += geser;
			if(text[i] > 'Z'){
				text[i] = text[i] - 'Z' + 'A' - 1;
			}
		} else if(text[i] >= 'a' && text[i] <= 'z'){
			text[i] += geser;
			if(text[i] > 'z'){
				text[i] = text[i] - 'z' + 'a' - 1;
			}
		}
	}

	fileOutput.open(nFile);
	fileOutput << text;
	fileOutput.close();
}

void cetakFile(char nFile[]){
	ifstream namafile;
	char karakter;
	namafile.open(nFile);
	
	while(!namafile.eof()){
		namafile.get(karakter);
		if(!namafile.eof()){
			cout << karakter;
		}
	}
	cout << endl;
}