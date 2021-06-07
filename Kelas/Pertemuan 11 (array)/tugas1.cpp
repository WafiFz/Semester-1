/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 1- 
*/

#include <iostream>
using namespace std;

typedef int matriks[10][10];
typedef int larik[10];
void header(string isi);
void menu(int& pilihan);
void ukuranMatriks(int& a, int& b);
void ukuranMatriks2(int& c, int& d);
void inputMatriks(matriks x, int a, int b);
void printMatriks(matriks x, int a, int b);
void penjumlahan(matriks hasilTambah, matriks x, matriks y, int a, int b);
void perkalian(matriks hasilKali, matriks x, matriks y, int a, int b, int c, int d);
void transpose(matriks x, int a, int b);
void cetakLarik(larik satuDimensi, int a);
void cariJumlahBaris(larik jumlahBaris, matriks x, int a, int b);
void cariJumlahKolom(larik jumlahKolom, matriks x, int a, int b);


int main(){
	larik jumlahBaris, jumlahKolom;
	matriks satu, dua, hasilTambah, hasilKali;
	int nBaris, nKolom, nBaris1, nKolom1, nBaris2, nKolom2;	
	int pilihan = 0;
	while (pilihan != 5){
		menu(pilihan);
		switch(pilihan){
			case 1 :
				cout << endl;
				header ("-Penjumlahan Matriks-");
				ukuranMatriks(nBaris, nKolom);
				cout << "\n== Matriks 1 ==\n";
				inputMatriks(satu, nBaris, nKolom);
				cout << "\n== Matriks 2 ==\n";
				inputMatriks(dua, nBaris, nKolom);
				cout << endl; 
				printMatriks(satu, nBaris, nKolom);
				cout << "\n     +\n\n";
				printMatriks(dua, nBaris, nKolom);
				penjumlahan(hasilTambah, satu, dua, nBaris, nKolom);
				cout << endl;
				break;

			case 2 : 
				perkalian :
				cout << endl;
				header ("-Perkalian Matriks-");
				cout << "Syarat: Banyak Kolom Mstriks 1 = Banyak Baris Matriks 2";
				cout << "\n\n== Matriks 1 ==\n";
				ukuranMatriks(nBaris1, nKolom1);
				cout << "\n== Matriks 2 ==\n";
				ukuranMatriks2(nBaris2, nKolom2);
				
				if (nKolom1 != nBaris2){
					cout << "\n Matriks 1 & Matriks 2 Tidak Dapat Dikali\n";
					cout << " PERHATIKAN SYARAT!!!\n\n";
					goto perkalian;

				} else {
					cout << "\n-- Input Elemen Matriks --";
					cout << "\n\n== Matriks 1 ==\n";
					inputMatriks(satu, nBaris1, nKolom1);
					cout << "\n== Matriks 2 ==\n";
					inputMatriks(dua, nBaris2, nKolom2);
					cout << endl; 
					printMatriks(satu, nBaris1, nKolom1);
					cout << "\n     *\n\n";
					printMatriks(dua, nBaris2, nKolom2);
					perkalian(hasilKali, satu, dua, nBaris1, nKolom1, nBaris2, nKolom2);
					cout << endl;
				}
				break;

			case 3 : 
				cout << endl;
				header ("-Transpose Matriks-");
				ukuranMatriks(nBaris, nKolom);
				cout << "\n-- Input Elemen Matriks --\n\n";
				inputMatriks(satu, nBaris, nKolom);
				cout << "\n== Matriks ==\n";
				printMatriks(satu, nBaris, nKolom);
				cout << "\n== Hasil Transpose ==\n";
				transpose(satu, nKolom, nBaris);
				cout << endl;
				break;

			case 4 :
				cout << endl;
				header ("-Jumlah Setiap Baris dan Kolom Suatu Matriks-");
				ukuranMatriks(nBaris, nKolom);
				cout << "\n-- Input Elemen Matriks --\n\n";
				inputMatriks(satu, nBaris, nKolom);
				cout << "\n== Matriks ==\n";
				printMatriks(satu, nBaris, nKolom);
				cariJumlahBaris(jumlahBaris, satu, nBaris, nKolom);
				cariJumlahKolom(jumlahKolom, satu, nBaris, nKolom);
				cout << endl;
				break;	

			case 5 :
				cout << endl;
				header ("-PROGRAM SELESAI-");
				cout << endl;
				break;

			 default:
				cout << "\n\nMenu tidak ada. Cek kembali daftar Menu!\n";
		}
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

void menu(int& pilihan){
	header("------------MENU------------");
	cout << "1. Penjumlahan Matriks\n";
	cout << "2. Perkalian Matriks\n";
	cout << "3. Transpose Matriks\n";
	cout << "4. Jumlah dari Setiap Baris\n"; 
	cout << "   dan Kolom Suatu Matriks\n";
	cout << "5. Selesai\n";
	cout << "----------------------------\n";
	cout << "Pilih Menu [1-5] : ";
	cin >> pilihan; 
}

void ukuranMatriks(int& a, int& b){
	cout << "Banyak Baris\t: "; cin >> a;
	cout << "Banyak Kolom\t: "; cin >> b;
}

void ukuranMatriks2(int& c, int& d){
	cout << "Banyak Baris\t: "; cin >> c;
	cout << "Banyak Kolom\t: "; cin >> d;
}

void inputMatriks(matriks x, int a, int b){
	for (int i = 0; i < a; i++){
		for (int j = 0; j < b; j++){
			cout << "Baris [" << i+1 <<"] Kolom [" << j+1 << "] : ";
			cin >> x[i][j];
		}
	}
}

void printMatriks(matriks x, int a, int b){
	for (int i = 0; i < a; i++){
		cout << "[  ";
		for (int j = 0; j < b; j++){
			cout << x[i][j] << "  ";
		} cout << "]" << endl;
	}
}

void penjumlahan(matriks hasilTambah, matriks x, matriks y, int a, int b){
	cout << "\n     =\n\n";
	for (int i = 0; i < a; i++){
		cout << "[  ";
		for (int j = 0; j < b; j++){
			hasilTambah[i][j] = x[i][j] + y[i][j];
			cout << hasilTambah[i][j] << "  ";
		} cout << "]" << endl;
	}
}

void perkalian(matriks hasilKali, matriks x, matriks y, int a, int b, int c, int d){
	int temp=0;
	for(int i = 0; i < a; i++){
      for(int j = 0; j < d; j++){
      	hasilKali[i][j] = 0;
        for(int k = 0; k < c; k++){
          temp = x[i][k] * y[k][j];
          hasilKali[i][j] = hasilKali[i][j] + temp;
        }
      }
    }

    cout << "\n     =\n\n";
    for (int i = 0; i < a; i++){
		cout << "[  ";
		for (int j = 0; j < d; j++){
			cout << hasilKali[i][j] << "  ";
		} cout << "]" << endl;
	}
}

void transpose(matriks x, int a, int b){
	for (int i = 0; i < a; i++){
    	cout << "[  ";
   		 for (int j = 0; j < b; j++){
      		cout << x[j][i] << "  ";
    	} cout << "]" << endl;
  	}
}

void cetakLarik(larik satuDimensi, int a){
	for (int i = 0; i < a; i++){
		cout << "Ke-" << i+1 << " = " << satuDimensi[i] << endl;
	}
}

void cetakLarik2(larik satuDimensi, int a){
	for (int i = 0; i < a; i++){
		cout << satuDimensi[i] << " ";
	}
}

void cariJumlahBaris(larik jumlahBaris, matriks x, int a, int b){
	cout << "\n\n== Jumlah Baris ==\n";
	for (int i = 0; i < a; i++){
		int temp=0;
		for (int j = 0; j < b; j++){
			temp += x[i][j];
		} jumlahBaris[i] = temp;
	} cetakLarik(jumlahBaris, a);
}

void cariJumlahKolom(larik jumlahKolom, matriks x, int a, int b){
	cout << "\n\n== Jumlah Kolom ==\n";
	for (int i = 0; i < a; i++){
		int temp=0;
		for (int j = 0; j < b; j++){
			temp += x[j][i];
		} jumlahKolom[i] = temp;
	} cetakLarik(jumlahKolom, b);
}
