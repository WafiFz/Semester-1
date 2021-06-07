/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 9 Desember 2020 
deskripsi: -Soal 5- 
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

void buatContohFile(){
	char contohFile[] = "teks.txt";
	ofstream fileteks;
	fileteks.open(contohFile);
	fileteks << "Lorem ipsum dolor sit amet, censectetur adipscing elit, sed do elusmod tempor incididunt ut labore et dolore magna aliqua.
	\nUt enim ad minim veniam, quis nostreud exercitation ullamco laboris nisi ut aliquip ex ea commodo cosequat."
	fileteks.close();
	output(contohFile);
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
		if((isiFile == " ") && (!fileTeks.eof())){
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