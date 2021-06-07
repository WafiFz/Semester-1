/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 21 Oktober 2020 
deskripsi: -Soal 2-
*/

#include <iostream>
using namespace std;

int angka;
int faktorial(int a);
void input ();


int main() {
	
	input();
	cout << "Nilai faktorialnya adalah : " << faktorial(angka);
	cin.get();
	return 0;
}

int faktorial(int a) {
	
	if (a <= 1) {
		return a;
	}
	else {
		return a * faktorial(a - 1);
	}

	cout << a;

}
void input (){
	
	cout << "Menghitung faktorial dari : ";
	cin >> angka;

}