/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 Oktober 2020 
deskripsi: -Tugas 3- 
			Program Sigma
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "\n=====PROGRAM BIL. PRIMA=====\n\n";
	cout << "Input Jangkauan Angka : ";
	cin >> n;
	cout << "-----------------------------\n\n";
	cout << "Di antara 1 sampai " << n;
	cout << " terdapat bilangan prima : \n\n";

	int prima = 1;
	for (int a=2; a <= n; a++) {
		for (int b=2; b < a; b++) {
			if (a % b == 0) {
				prima = 0;
				break;
			}
		}

		if (prima == 1)
		cout << "," << a;
		prima = 1;

		}
		cout << endl;
	}