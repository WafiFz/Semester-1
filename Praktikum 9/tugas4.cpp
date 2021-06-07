/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 4- 
*/

#include <iostream>
using namespace std;

int n;
struct pegawai{
	string nip, nama;
	int gol;
	long gaji;
};

void header(string isi);
int banyakPegawai();
void inputPegawai(pegawai data[]);
void outputPegawai(pegawai data[]);
void gajiPegawai(pegawai data[]);
long rataanGaji(pegawai data[]);
long gajiTertinggi(pegawai data[]);
long gajiTerendah(pegawai data[]);
void swap (int &a, int&b);
void mengurutkanNIP(pegawai data[]);

int main(){
	pegawai data[1000];
	int banyak;
	long rata2, tertinggi, terendah;
	banyak = banyakPegawai();
	inputPegawai(data);
	gajiPegawai(data);
	rata2 = rataanGaji(data);
	tertinggi = gajiTertinggi(data);
	terendah = gajiTerendah(data);
	mengurutkanNIP(data);
	cout << endl;
	header("--HASIL--");
	cout << "\nRata-rata gaji  : " << rata2
		 << "\nGaji Tertinggi  : " << tertinggi
		 << "\nGaji Terendah   : " << terendah
		 << endl;
	outputPegawai(data);
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

int banyakPegawai(){
	header("--PROGRAM DATA PEGAWAI--");
	cout << "Banyak Pegawai : "; cin >> n;
	return n;
}

void inputPegawai(pegawai data[]){
	cout << endl;
	header("--INPUT--");
	for (int i = 0; i < n; i++){
		cout << "\n||== Pegawai " << i+1 << " ==||"; 
		cout << "\nNIP      : "; cin >> data[i].nip;
		cout << "Nama     : "; cin >> data[i].nama;
		cout << "Golongan : "; cin >> data[i].gol;
	}
}

void outputPegawai(pegawai data[]){
	cout << "\nMengurutkan Daftar Pegawai Berdasarkan NIP "
		 << "secara ascending:\n";
	for (int i = 0; i < n; i++){
		cout << "\nNIP      : " << data[i].nip
			 << "\nNama     : " << data[i].nama
			 << "\nGolongan : " << data[i].gol
			 << "\nGaji     : " << data[i].gaji << endl;
	}
}

void gajiPegawai(pegawai data[]){
	for (int i = 0; i < n; i++){
		switch(data[i].gol){
			case 1 : data[i].gaji = 2000000; break;
			case 2 : data[i].gaji = 3000000; break;
			case 3 : data[i].gaji = 5000000; break;
			case 4 : data[i].gaji = 8000000; break;
		}
	}
}

long rataanGaji(pegawai data[]){
	long rata2, jumlah=0;
	for (int i = 0; i < n; i++){
		jumlah += data[i].gaji ;
	}
	rata2 = jumlah / n;
	return rata2;
}

long gajiTertinggi(pegawai data[]){
  long tertinggi = 0;
  for (int i = 0; i < n; i++) {
    if(data[i].gaji > tertinggi){
      tertinggi = data[i].gaji;
    }
  }
  return tertinggi;
}

long gajiTerendah(pegawai data[]){
  long terendah = 8000000;
  for (int i = 0; i < n; i++) {
    if(data[i].gaji < terendah){
      terendah = data[i].gaji;
    }
  }
  return terendah;
}

void swap (int &a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void mengurutkanNIP(pegawai data[]){
    for (int i = n-1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (data[j].nip > data[j+1].nip)
                swap(data[j], data[j+1]);
        }
    }
}

