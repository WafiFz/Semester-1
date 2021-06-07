/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Latihan Array of Record- 
*/

#include <iostream>
using namespace std;

struct mahasiswa{
	char nama[15];
	char npm[12];
	int nilai;
};


int main(){
	mahasiswa mahasiswa[20];

	cout << "\n== Input Data ==\n";
	for (int i = 0; i < 20; i++){
		cout << i+1 << ". Nama : "; cin >> mahasiswa[i].nama;
		cout << "   NPM  : "; cin >> mahasiswa[i].npm;
		cout << "   Nilai: "; cin >> mahasiswa[i].nilai;
	}

	cout << "\n\n== Output Data ==\n";
	for (int i = 0; i < 20; i++){
	cout << i+1 << ".  Nama : " << mahasiswa[i].nama << endl;
	cout << "   NPM  : " << mahasiswa[i].npm << endl;
	cout << "   Nilai: " << mahasiswa[i].nilai << endl;
	}
}