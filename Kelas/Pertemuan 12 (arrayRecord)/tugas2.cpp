/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 11 November 2020 
deskripsi: -Tugas 2-
			Program menentukan tarif parkir kendaraan dengan menginputkan
			waktu masuk dan waktu keluar. Kemudian menghitung lama parkir 
			dan biayanya. 
*/

#include <iostream>
#include <iomanip>
using namespace std;

struct parkir{
	string plat;
	int jam, menit, detik;
	long biaya;
};

void header(string isi);
void judul();
void inputData(parkir& kendaraan, parkir& masuk, parkir& keluar);
int konversiWaktuKeDetik(parkir input);
void konversiWaktu(int durasi, parkir& output);
void cariBiaya(parkir& kendaraan, parkir output);
void cetakStruk(parkir kendaraan, parkir outputMasuk, parkir outputKeluar, parkir outputDurasi);

int main(){
	parkir kendaraan, masuk, keluar, outputMasuk, outputKeluar, outputDurasi;
	int waktuMasuk, waktuKeluar;
	judul();
	inputData(kendaraan, masuk, keluar);
	waktuMasuk  = konversiWaktuKeDetik(masuk);
	waktuKeluar = konversiWaktuKeDetik(keluar);
	konversiWaktu(waktuMasuk, outputMasuk);
	konversiWaktu(waktuKeluar, outputKeluar);		
	konversiWaktu(waktuKeluar-waktuMasuk, outputDurasi);	
	cariBiaya(kendaraan, outputDurasi);
	cetakStruk(kendaraan, outputMasuk, outputKeluar, outputDurasi);
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

void judul(){
	header("-------PROGRAM STRUK PARKIR-------");
	cout << "1 jam pertama\t\t= Rp. 2000,-\n"
		 << "per jam berikutnya\t= Rp. 1000,-\n\n";
}

void inputData(parkir& kendaraan, parkir& masuk, parkir& keluar){
	header("--INPUT--");
		cout << "\nPlat Kendaraan : "; getline(cin, kendaraan.plat);
		cout << "\n== Waktu Masuk ==\n"; 
		cout << "Jam    : "; cin >> masuk.jam;
		cout << "Menit  : "; cin >> masuk.menit;
		cout << "Detik  : "; cin >> masuk.detik;
		cout << "\n== Waktu Keluar ==\n";
		cout << "Jam    : "; cin >> keluar.jam;
		cout << "Menit  : "; cin >> keluar.menit;
		cout << "Detik  : "; cin >> keluar.detik;
}

int konversiWaktuKeDetik(parkir input){
	int waktu;
	parkir jj, mm;
		jj.jam = input.jam * 3600; mm.menit = input.menit * 60;
		waktu = jj.jam + mm.menit + input.detik;
		return waktu;
}

void konversiWaktu(int durasi, parkir& output){
		if (durasi < 0){
			durasi += 86400;
		}
		output.jam   = durasi / 3600;
		output.detik = durasi % 3600;
		output.menit = output.detik / 60;
		output.detik = durasi % 60;
}

void cariBiaya(parkir& kendaraan, parkir output){
		kendaraan.biaya = (output.jam * 1000) + 2000;
}

void cetakStruk(parkir kendaraan, parkir outputMasuk, parkir outputKeluar, parkir outputDurasi){
	cout << endl;
	header("--STRUK PARKIR--");
	cout << "\nPlat Nomor   : " << kendaraan.plat << endl;
	cout << "Waktu Masuk  : " 
	 	 << setfill('0') << setw(2) << outputMasuk.jam << ":" 
	 	 << setfill('0') << setw(2) << outputMasuk.menit << ":" 
	 	 << setfill('0') << setw(2) << outputMasuk.detik << endl;
	cout << "Waktu Keluar : " 
		 << setfill('0') << setw(2) << outputKeluar.jam << ":" 
		 << setfill('0') << setw(2) << outputKeluar.menit << ":" 
		 << setfill('0') << setw(2) << outputKeluar.detik << endl;
	cout << "Lama Waktu   : "	 
		 << outputDurasi.jam << " jam, "
		 << outputDurasi.menit << " menit, "
		 << outputDurasi.detik << " detik" << endl;	 
	cout << "Bayar        : "
		 << kendaraan.biaya << endl << endl;
}


