/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 3- 
*/

#include <iostream>
#include <iomanip>
using namespace std;

int n,i;
int jj[100], mm[100], dd[100];

struct parkir{
	string plat;
	int masuk;
	int keluar;
	int biaya;
};

int banyak(){
	cout << "Banyak Kendaraan : ";
	cin >> n;
	return n;
}

void inputData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[]){
	for (int i = 0; i < n; i++){
		cout << "\n||== Data " << i+1 << " ==||"; 
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

void cetakData(parkir kendaraan[], parkir jam[], parkir menit[], parkir detik[], int jj[], int mm[], int dd[]){
	for (int i = 0; i < n; i++){
		if ((jam[i].masuk >= 01 && jam[i].masuk <=24) && (menit[i].masuk >= 00 && menit[i].masuk <= 59) && (detik[i].masuk >= 00 && detik[i].masuk <=59)){
			if ((jam[i].keluar >= 01 && jam[i].keluar <=24) && (menit[i].keluar >= 00 && menit[i].keluar <= 59) && (detik[i].keluar >= 00 && detik[i].keluar <=59)){
				cout << "\n||== Data " << i+1 << " ==||"; 
				cout << "\nPlat Nomor   : " << kendaraan[i].plat << endl;
				cout << "Waktu Masuk  = " 
				 	 << setfill('0') << setw(2) << jam[i].masuk << ":" 
				 	 << setfill('0') << setw(2) << menit[i].masuk << ":" 
				 	 << setfill('0') << setw(2) << detik[i].masuk << endl;
				cout << "Waktu Keluar = " 
					 << setfill('0') << setw(2) << jam[i].keluar << ":" 
					 << setfill('0') << setw(2) << menit[i].keluar << ":" 
					 << setfill('0') << setw(2) << detik[i].keluar << endl;
				cout << "Lama Parkir  = "
					 << jj[i]+24 << " jam " 
					 << mm[i]+60 << " menit " 
					 << dd[i]+60 << " detik " << endl;
				cout << "Bayar        = "
					 << kendaraan[i].biaya << endl << endl;	
			} else{
				cout << "Masukkan kembali input waktu keluar dengan benar!" << endl;
			}
		} else {
			cout << "Masukkan kembali input dengan benar!" << endl;
		}
	}	
}

void LamaWaktu(parkir jam[], parkir menit[], parkir detik[]){
	for (int i = 0; i < n; i++){
		jj[i] = jam[i].keluar - jam[i].masuk;
		mm[i] = menit[i].keluar - menit[i].masuk;
		dd[i] = detik[i].keluar - detik[i].masuk;
	}
}

void cariBiaya(parkir kendaraan[], int jj[]){
	for (int i = 0; i < n; i++){
		if (jj[i] < 0){
			kendaraan[i].biaya = (24+jj[i]) * 5000;
		} else {
			kendaraan[i].biaya = jj[i] * 5000;
		}
	}
}

int main(){
	parkir kendaraan[100];
	parkir jam[100], menit[100], detik[100];
	n = banyak();
	inputData(kendaraan, jam, menit, detik);
	LamaWaktu(jam, menit, detik);
	cariBiaya(kendaraan, jj);
	cetakData(kendaraan, jam, menit, detik, jj, mm, dd);
}