/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 Oktober 2020 
deskripsi: -Tugas 2- 
			Program Sigma
*/
#include <iostream>
using namespace std;

int main() {
	int n, x = 0;
	cout << "\n=====PROGRAM SIGMA=====\n" << endl;
	cout << "Input Angka : ";
	cin >> n;
	cout << endl;
	
	int n2 = n;
	
	do {
		x += n;
		n--;
	} while (n >= 1);
		cout << "Hasil Sigma : " << x;
		cout << " = (";
		for (int j = 1; j <=1; j++){
			for (int k = n2; k >= 1; k--){
				if (k >= 1){
					if (k > 1){
						cout << k << " + ";
					} else if ( k == 1){
						cout << k;
					}
				} else {
					cout << endl;
				}
			}	
		}
	cout << ")\n";			
}	
