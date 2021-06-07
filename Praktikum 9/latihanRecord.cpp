/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Latihan Record- 
*/

#include <iostream>
using namespace std;

struct koordinat{
	float absis;
	float ordinat;
};

void getPoint (koordinat& ttk){
	cout << "Masukan Absis : "; cin >> ttk.absis;
	cout << "Masukan Ordinat : "; cin >> ttk.ordinat;
}

void printPoint (koordinat ttk){
	cout << "(" << ttk.absis << ", " << ttk.ordinat << ")";
}

int main(){
	koordinat a,b;

	cout << "Input Titik a " << endl; getPoint(a);
	cout << "\nInput Titik b " << endl; getPoint(b);
	cout << "\nTitik a = : "; printPoint(a);
	cout << "\nTitik b = : "; printPoint(b);
}	