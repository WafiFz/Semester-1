/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Deklarasi Secara Langsung- 
*/

#include <iostream>
using namespace std;

int main(){
	int data[10];
	int n;

	cout << "Banyak Data\t: "; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << "\t: ";
		cin >> data[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << "\t: " << data[i] << endl;
	}
}