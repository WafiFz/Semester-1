/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 1- 
*/

#include <iostream>
using namespace std;

struct koordinat{
	float absis;
	float ordinat;
};

void getPoint (koordinat& ttk);
void printPoint (koordinat ttk);
void keterangan ();

int main(){
	koordinat a,b,c,d,t;

	cout << "Input Titik A " << endl; getPoint(a);
	cout << "\nInput  Titik B " << endl; getPoint(b);
	cout << "\nTitik A = : "; printPoint(a);
	cout << "\nTitik B = : "; printPoint(b);
	t.absis = (a.absis + b.absis)/2;
	t.ordinat = (a.ordinat + b.ordinat)/2;
	cout << "\nTitik T = : "; printPoint(t);
	c.absis = a.absis;
	c.ordinat = -a.ordinat;
	cout << "\nTitik C = : "; printPoint(c);
	d.absis = -a.absis;
	d.ordinat = a.ordinat;
	cout << "\nTitik D = : "; printPoint(d);
	keterangan();
}	

void getPoint (koordinat& ttk){
	cout << "Masukan Absis\t: "; cin >> ttk.absis;
	cout << "Masukan Ordinat : "; cin >> ttk.ordinat;
}

void printPoint (koordinat ttk){
	cout << "(" << ttk.absis << ", " << ttk.ordinat << ")";
}

void keterangan (){
	cout << "\n\n== Keterangan ==\n";
	cout << "Titik T = merupakan titik tengah dari 2 titik A dan B\n";
	cout << "Titik C = merupakan titik hasil dari pencerminan titik A terhadap sumbu X\n";
	cout << "Titik D = merupakan titik hasil dari pencerminan titik A terhadap sumbu Y\n ";
}

