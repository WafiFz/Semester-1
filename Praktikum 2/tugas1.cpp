/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 20 September 2020 
deskripsi: -Program Penentu Huruf Mutu-
			Menampilkan huruf mutu dengan cara memasukkan
			nilai-nilai 
*/

#include <iostream>
using namespace std;

int main(){
	//deklarasi
	float tugas, kuis, uts, uas, jumlah,angka;
	string hasil;

	cout << "\n PROGRAM HURUF MUTU\n";
	cout << " =========================\n";
	cout << " silakan Masukkan Data\n";
	cout << " -------------------------\n";
	//input Nilai Tugas, Kuis, UTS, UAS
	cout << " Nilai Tugas\t: ";
	cin >> tugas;
	cout << " Nilai Kuis\t: ";
	cin >> kuis;
	cout << " Nilai UTS\t: ";
	cin >> uts;
	cout << " Nilai UAS\t: ";
	cin >> uas;
	//Proses: Pembobotan Nilai
	tugas *= 0.25;
	kuis *= 0.20;
	uts *= 0.25;
	uas *= 0.30;
	jumlah = tugas + kuis + uts + uas;
	//seleksi menampilkan huruf mutu
	if (jumlah > 100){
		hasil = "!!! NILAI YANG ANDA MASUKKAN SALAH !!!\n";
	}else if (jumlah >= 80){
		if (jumlah <= 100){
			hasil = "A";
		}
	}else if (jumlah >= 68){
		if (jumlah <= 79){
			hasil = "B";
		}
	}else if (jumlah >= 56){
		if (jumlah <= 67){
			hasil = "C";
		}
	}else if (jumlah >= 45){
		if (jumlah <= 55){
			hasil = "D";
		}
	}else if (jumlah >= 0){
		if (jumlah <= 44){
			hasil = "E";
		}
	}else{
		hasil = "!!! NILAI YANG ANDA MASUKKAN SALAH !!!\n";
	}
	//output akumulasi nilai dan huruf mutu
	cout << " -------------------------\n";
	cout << " Akumulasi Nilai: " << jumlah << endl;
	cout << " Huruf Mutu\t: " << hasil << endl;
}

