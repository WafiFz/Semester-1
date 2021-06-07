/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 9 Desember 2020 
deskripsi: -Soal 2- 
*/

#include <iostream> 
using namespace std; 

void olahAngka(int c, int a, int &b){ //fungsi (angka yang diterima c = 8, a = 6, b = 5) dan yang dikembalikan nilainya hanya b karena menggunakan pass by reference
	a+= 6; //  6 + 6 = 12
	b = a + c; // nilai b jadi 12+8 = 20
	c = --b; // nilai c = 19 (b telah dikurang 1)  Pre-Decrement
	cout << b++ << endl; // nilai b diprint dulu 19 kemudian tambah 1 jadi 20 (Post-Increment) 
						// b dikembalikan nilainya 20
}

int main(){
	int a, b, c;	//deklarasi integer a, b, c
	a = 8;			//value a = 8
	b = 6;			//value b = 6
	c = 5;			//value c = 5
	olahAngka(a, b, c); //angka yang diolah (8,6,5)
	cout << a << " " << b << " " << c; //diprint a = 8, b= 6, c=20 karena diolah difungsi

}

