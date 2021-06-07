/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Deklarasi Sekaligus Inisialisasi- 
*/

#include <iostream>
using namespace std;

int main(){
	int data[] = {11, 22, 33, 44, 55};
	int n = sizeof(data)/4;

	for (int i = 0; i < n; i++){
		cout << "Data ke-" << i+1 << "\t: " << data[i] << endl;
	}

	int mtx_identitas[][2] = {
		{1,0},
		{0,1}
	};

	n = sizeof(mtx_identitas[0])/sizeof(mtx_identitas[0][0]);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << mtx_identitas[i][j] << " ";
		}
		cout << endl;
	}
}