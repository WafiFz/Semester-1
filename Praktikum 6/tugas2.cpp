/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Tugas 2-
			mengubah tugas 1 dan 2 praktikum 5
			ke function
*/
#include <iostream>
using namespace std;
int jumlah;
int n, x = 0;
void inputAsterik();
void pola1();
void pola2();
void pola3();
void inputSigma();
void sigma();

int main() {
	inputAsterik();
	pola1();
	pola2();
	pola3();
	inputSigma();
	sigma();				
}


void inputAsterik(){
	cout << "\n=====PROGRAM ASTERIK=====\n" << endl;
	cout << "Input Jumlah Baris : ";
	cin >> jumlah;
}

void pola1(){
	cout << "---Pola 1---\n";
	for (int p = 1; p <= jumlah; p++) {
		for (int q = 1; q <= p; q++) {
			cout << "*";
		}
		cout << endl;
	}
}

void pola2(){
	cout << "\n---Pola 2---\n";
	for (int x = 0; x < jumlah; x++) {
		for (int y = 0; y < x; y++) {
			cout << " ";
		}
		for (int z = jumlah; z > x; z--) {
			cout << "*";
		}
		cout << endl;
	}
}

void pola3(){
	cout << "\n---Pola 3---\n" << endl;
	for (int i = 1; i <= jumlah; i++){
		for (int j = 1; j <= jumlah; j++)
		{
			if (i == j || i+j == jumlah+1){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}

void inputSigma(){
	cout << "\n=====PROGRAM SIGMA=====\n" << endl;
	cout << "Input Angka : ";
	cin >> n;
	cout << endl;
}

void sigma(){
	int n2 = n;
	do {
		x += n;
		n--;
	} while (n >= 1);
		cout << "Hasil Sigma : " << x;
		cout << " = (";
		for (int j = 1; j <=1; j++){
			for (int k = n2; k >= 1; k--){
				if (k >= 1){
					if (k > 1){
						cout << k << " + ";
					} else if ( k == 1){
						cout << k;
					}
				} else {
					cout << endl;
				}
			}	
		}
	cout << ")\n";
}