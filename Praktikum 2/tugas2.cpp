/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 20 September 2020 
deskripsi: -Menampilkan Persamaan Kuadrat	 
	 	   -Menentukan Jenis Akar
		   -Mencari akar-akar Persamaan Kuadrat

*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	//deklarasi
	float a, b, c, D, X1, X2;
	string jenis, p, q, r;

	cout << "\n PROGRAM MECARI AKAR-AKAR PERSAMAAN KUADRAT\n";
	cout << " ============================================\n";
	cout << " ax^2 + bx + c = 0 \n";
	cout << " --------------------------------------------\n";
	//input nilai a,b,c dari user
	cout << " Nilai a\t: ";
	cin >> a;
	cout << " Nilai b\t: ";
	cin >> b;
	cout << " Nilai c\t: ";
	cin >> c;
	//proses: menghitung Diskriminan dan Rumus Mencari X1,X2
	D = (b*b) - (4*a*c);
	X1 = (-b + sqrt(D)) / (2*a);
	X2 = (-b - sqrt(D)) / (2*a);
	//seleksi untuk menampilkan tanda sebelum b
	if(b < 0){
		q = " ";
	}else{
		q = " + ";
	}
	//seleksi untuk menampilkan tanda sebelum c
	if(c < 0){
		r = " ";
	}else{
		r = " + ";
	}
	//seleksi untuk menampilkan jenis akar
	if (D == 0){
		jenis = "Real Kembar";
	}else if (D > 0){
		jenis = "Real Berlainan Tanda";
	}else if (D < 0){
		jenis = "Imajiner";
	}else{
		jenis = "!!! NILAI YANG ANDA MASUKKAN SALAH !!!";
	}

	cout << " --------------------------------------------\n";
	//output Persamaan Kuadrat
	cout << " Persamaan Kuadrat\t: "; 
	cout << p << a << "x^2";
	cout << q << b << "x";
	cout << r << c << " = 0" << endl;
	//output Jenis Akar-Akar
	cout << " Jenis Akar-Akar\t: " << jenis << endl;
	//output nilai X1 & X2
	cout << " Nilai X1\t\t: " << X1 << endl;
	cout << " Nilai X1\t\t: " << X2 << endl;
}

