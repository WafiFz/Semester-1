/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Latihan 2- 
*/

#include <iostream>
using namespace std;

typedef int matriks[10][10];

void banyakData(int& a, int& b);
void isiMatriks(matriks x, int a, int b);
void cetakMatriks(matriks x, int a, int b);

int main(){
	matriks x;
	int nBaris, nKolom;
	banyakData(nBaris, nKolom);
	isiMatriks(x, nBaris, nKolom);
	cetakMatriks(x, nBaris, nKolom);
}

void banyakData(int& a, int& b){
	cout << "Banyak Baris : "; cin >> a;
	cout << "Banyak Kolom : "; cin >> b;
}

void isiMatriks(matriks x, int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Baris " << i+1 << ", Kolom " << j+1 << " = ";
			cin >> x[i][j];
		}
	}
}

void cetakMatriks(matriks x, int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << x[i][j] << "\t";
		}
		cout << endl;
	}
}