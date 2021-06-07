/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 11 November 2020 
deskripsi: -Tugas 1- (gabungan contoh 1 dan tugas 1)
			Program pencerminan titik terhadap sumbu x,
			sumbu y, dan titik tengah (0,0)
*/

#include <iostream>
using namespace std;

struct koordinat{
	float absis;
	float ordinat;
};

void judul();
void getPoint (koordinat& ttk);
void printPoint (koordinat ttk);

int main(){
	
	koordinat a,b,c,d,e,t;

	judul();

	cout << "\nInput Titik A " << endl; getPoint(a);
	cout << "\nInput  Titik B " << endl; getPoint(b);
	
	t.absis   = (a.absis + b.absis)/2;
	t.ordinat = (a.ordinat + b.ordinat)/2;
	
	c.absis   = a.absis;
	c.ordinat = -a.ordinat;
	
	d.absis   = -a.absis;
	d.ordinat = a.ordinat;
	
	e.absis   = -a.absis;
	e.ordinat = -a.ordinat;
	
	cout << "\nTitik A yang diinput oleh user\t\t\t\t\t : "; printPoint(a);
	cout << "\nTitik B yang diinput oleh user\t\t\t\t\t : "; printPoint(b);
	cout << "\nTitik hasil dari pencerminan titik A terhadap sumbu X\t\t : "; printPoint(c);
	cout << "\nTitik hasil dari pencerminan titik A terhadap sumbu Y\t\t : "; printPoint(d);
	cout << "\nTitik hasil dari pencerminan titik A terhadap titik tengah (0,0) : "; printPoint(e);
	cout << "\nTitik tengah dari 2 titik A dan B\t\t\t\t : "; printPoint(t);
	cout << endl;
}	

void judul(){
	cout << "\n=======================\n"
		 << "---PROGRAM KOORDINAT---"
		 << "\n=======================\n";
}

void getPoint (koordinat& ttk){
	cout << "Masukan Absis\t: "; cin >> ttk.absis;
	cout << "Masukan Ordinat : "; cin >> ttk.ordinat;
}

void printPoint (koordinat ttk){
	cout << "(" << ttk.absis << ", " << ttk.ordinat << ")";
}

