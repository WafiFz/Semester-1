/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Latihan 1- 
*/

#include <iostream>
using namespace std;

void banyakData(int& n);
void isiLarik(int a[], int n);
void printLarik(int a[], int n);

int main(){
	int x[10];
	int n;
	banyakData(n);
	isiLarik(x, n);
	printLarik(x, n);

}

void banyakData(int& n){
	cout << "Banyak Data : "; cin >> n;
}

void isiLarik(int a[], int n){
	cout << "Silahkan masukkan data larik:" << endl;
	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << " = "; cin >> a[i];
	}
}

void printLarik(int a[], int n){
	cout << "\nData yang telah dimasukkan ke larik:" << endl;
	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << " = " << a[i] << endl;
	}
}