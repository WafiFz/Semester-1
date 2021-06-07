/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 2- 
*/

#include <iostream>
#include <cmath>
using namespace std;

typedef int kumpulan[100];
int n,i;
float rata2, hasilSigma, hasilStandarDeviasi;
void header(string isi);
void inputData(kumpulan data);
void cetakData(kumpulan data, int n);
float rataan(kumpulan data);
float sigma(kumpulan data, float rata2);
float standarDeviasi(float hasilSigma);

int main(){
	kumpulan data;
	header("--PROGRAM CARI STANDAR DEVIASI");
	inputData(data);
	cetakData(data, n);
	rata2 = rataan(data);
	header("--HASIL HITUNGAN--");
	cout << "Rataan          = " << rata2 << endl;
	hasilSigma = sigma(data, rata2);
	hasilStandarDeviasi = standarDeviasi(hasilSigma);
	cout << "Standar Deviasi = ";
	cout << hasilStandarDeviasi << endl;
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

void inputData(kumpulan data){
	cout << "Banyak Data = "; cin >> n;
	cout << "\n=== Input Data ===\n";
	for (int i = 0; i < n; i++){
	cout << "Data Ke-" << i+1 << " = ";
	cin >> data[i];
	}
}

void cetakData(kumpulan data, int n){
    cout << "\n====== Data ======\n";
    cout << "{";
    for (int i = 0; i < n; i++){
        if (i == n-1){
            cout << data[i];
        }else {
            cout << data[i] << ", ";
        }
    }
    cout << "}\n\n";
}

float rataan(kumpulan data){
	data[i];
	float temp;
	for (i = 0 ; i < n; i++){
		temp += data[i];
	}
	return rata2 = temp/n;
}

float sigma(kumpulan data, float rata2){
	float temp;
	for (i = 0; i < n; i++){
		temp += pow((data[i] - rata2), 2);
	}
	return hasilSigma = temp;
}

float standarDeviasi(float hasilSigma){
	return hasilStandarDeviasi = sqrt(hasilSigma/(n-1));
}

