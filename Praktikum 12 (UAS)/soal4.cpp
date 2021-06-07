/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tanggal  : 9 Desember 2020 
deskripsi: -Soal 4- 
*/

#include <iostream>
using namespace std;

struct waktu{
	int tahun;
	int bulan;
	int hari;
};


void inputhari(waktu& input);
void proses(waktu& output, waktu input);
void print(waktu output, waktu input);

int main(){
	waktu input, output;
	inputhari(input);
	proses(output, input);
	print(output, input);
	//cout << endl;

	cin.get();
	return 0;
}

void inputhari(waktu& input){
	cout << "\nInput hari : "; cin >> input.hari;
}

void proses(waktu& output, waktu input){
	//waktu temp;
	output.tahun = input.hari/365;
	output.hari = input.hari%365;
	output.bulan = output.hari/30;
	//temp.hari = output.hari%30;
	output.hari = output.hari%30;
}

void print(waktu output, waktu input){
	cout << endl;
	cout << input.hari << " hari = ";
	cout << output.tahun << " tahun ";
	cout << output.bulan << " bulan ";
	cout << output.hari << " hari " << endl;
}


