/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 3- 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int n;

struct parkir{
	string plat;
	int masuk;
	int keluar;
	int biaya;
};

parkir waktu[100];
int lamaWaktu[100], j[100], m[100], d[100] ;

void header(string isi);
int banyak();
void inputData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[]);
void konversiWaktu(parkir jam[], parkir menit[], parkir detik[]);
void LamaWaktu(parkir jam[], parkir menit[], parkir detik[]);
void cariBiaya(parkir kendaraan[], int j[]);
void cariLamaWaktu(parkir waktu[]);
void konversiLamaWaktu(int lamaWaktu[]);
void cetakData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[], int jj[], int mm[], int dd[]);

int main(){
	parkir kendaraan[100];
	parkir jam[100], menit[100], detik[100];
	n = banyak();
	inputData(kendaraan, jam, menit, detik);
	konversiWaktu(jam, menit, detik);
	cariLamaWaktu(waktu);
	konversiLamaWaktu(lamaWaktu);	
	cariBiaya(kendaraan, j);
	cetakData(kendaraan, jam, menit, detik, j, m, d);
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

int banyak(){
	header("-------PROGRAM STRUK PARKIR-------");
	cout << "1 jam pertama\t\t= Rp. 5000,- dan \n"
		 << "per jam berikutnya\t= Rp. 5000,-\n\n";
	cout << "Banyak Kendaraan : "; cin >> n;
	return n;
}

void inputData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[]){
 	cout << endl;
	header("--INPUT--");
	for (int i = 0; i < n; i++){
		cout << "\n||== Kendaraan " << i+1 << " ==||"; 
		cout << "\nPlat Kendaraan : "; cin >> kendaraan[i].plat;
		cout << "\n== Waktu Masuk ==\n"; 
		cout << "Jam    [00 - 24] : "; cin >> jam[i].masuk;
		cout << "Menit  [00 - 59] : "; cin >> menit[i].masuk;
		cout << "Detik  [00 - 59] : "; cin >> detik[i].masuk;
		cout << "\n== Waktu Keluar ==\n";
		cout << "Jam    [00 - 24] : "; cin >> jam[i].keluar;
		cout << "Menit  [00 - 59] : "; cin >> menit[i].keluar;
		cout << "Detik  [00 - 59] : "; cin >> detik[i].keluar;
	}
}

void konversiWaktu(parkir jam[], parkir menit[], parkir detik[]){
	parkir jj[100], mm[100], dd[100];
	for(int i; i<n; i++){
		jj[i].masuk = jam[i].masuk * 3600; mm[i].masuk = menit[i].masuk * 60;
		jj[i].keluar = jam[i].keluar * 3600; mm[i].keluar = menit[i].keluar * 60;
		waktu[i].masuk = jj[i].masuk + mm[i].masuk + detik[i].masuk;
		waktu[i].keluar = jj[i].keluar + mm[i].keluar + detik[i].keluar;
	}
}

void cariLamaWaktu(parkir waktu[]){
	for (int i = 0; i < n; i++){
		lamaWaktu[i] = waktu[i].keluar - waktu[i].masuk;
	}
}

void konversiLamaWaktu(int lamaWaktu[]){
	for (int i = 0; i < n; i++){
		if (lamaWaktu[i] < 0){
			lamaWaktu[i] += 86400;
		}
		j[i] = lamaWaktu[i]/3600;
		d[i] = lamaWaktu[i]%3600;
		m[i] = d[i]/60;
		d[i] = lamaWaktu[i]%60;
	}
}

void cariBiaya(parkir kendaraan[], int j[]){
	for (int i = 0; i < n; i++){
		kendaraan[i].biaya = (j[i]+1) * 5000;
	}
}

void cetakData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[], int jj[], int mm[], int dd[]){
	cout << endl << endl;;
	header("--HASIL--");
	for (int i = 0; i < n; i++){
		if ((jam[i].masuk >= 01 && jam[i].masuk <=24) && (menit[i].masuk >= 00 && menit[i].masuk <= 59) && (detik[i].masuk >= 00 && detik[i].masuk <=59)){
			if ((jam[i].keluar >= 01 && jam[i].keluar <=24) && (menit[i].keluar >= 00 && menit[i].keluar <= 59) && (detik[i].keluar >= 00 && detik[i].keluar <=59)){
				cout << "\n||== Kendaraan " << i+1 << " ==||"; 
				cout << "\nPlat Nomor   : " << kendaraan[i].plat << endl;
				cout << "Waktu Masuk  : " 
				 	 << setfill('0') << setw(2) << jam[i].masuk << ":" 
				 	 << setfill('0') << setw(2) << menit[i].masuk << ":" 
				 	 << setfill('0') << setw(2) << detik[i].masuk << endl;
				cout << "Waktu Keluar : " 
					 << setfill('0') << setw(2) << jam[i].keluar << ":" 
					 << setfill('0') << setw(2) << menit[i].keluar << ":" 
					 << setfill('0') << setw(2) << detik[i].keluar << endl;
				cout << "Lama Waktu   : "	 
					 << j[i] << " jam, "
					 << m[i] << " menit, "
					 << d[i] << " detik" << endl;	 
				cout << "Bayar        : "
					 << kendaraan[i].biaya << endl << endl;	
			} else{
				cout << "\nMasukkan kembali input waktu keluar pada Data " << i+1 << " dengan benar!" << endl;
			}
		} else {
			cout << "\nMasukkan kembali input Data " << i+1 << " dengan benar!" << endl;
		}
	}	
}