/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 3-
			Program data mahasiswa (NPM, Nama, Nilai)  
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct mahasiswa{
	char npm[100];
	char nama[100];
	int nilai;
};

int banyakData();
void inputData(mahasiswa mahasiswa[], int n);
void cetakData(mahasiswa mahasiswa[], int n);
void header(string isi);

int main(){
	mahasiswa mahasiswa[100];
	int n;
	n = banyakData();
	inputData(mahasiswa, n);
	cetakData(mahasiswa, n);
}

int banyakData(){
	int n;
	cout << endl;
	header("-PROGRAM DATA MAHASISWA-");
	cout << "Banyak Data Mahasiswa : "; cin >> n;
	return n;
}

void inputData(mahasiswa mahasiswa[], int n){
	for (int i = 0; i < n; i++){
		cout << "\nMasukkan data mahasiswa ke-" << i+1 << endl;
		cout << "NPM  : "; cin >> mahasiswa[i].npm;
		cout << "Nama : "; cin.get(); cin.getline(mahasiswa[i].nama, 100);
		cout << "Nilai: "; cin >> mahasiswa[i].nilai;
	}
}

void cetakData(mahasiswa mahasiswa[], int n){
	cout << "\n========================================\n"
		 << left << setw(15) << "NPM" << left << setw(20) << "NAMA" << "NILAI"
		 << "\n========================================\n";
	for (int i = 0; i < n; i++){
		cout << left << setw(15) << mahasiswa[i].npm
			 << left << setw(20) << mahasiswa[i].nama
			 << mahasiswa[i].nilai << endl;
	}
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