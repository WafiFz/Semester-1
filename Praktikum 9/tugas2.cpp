/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 November 2020 
deskripsi: -Tugas 2- 
*/

#include <iostream>
using namespace std;

struct waktu{
	int jam;
	int menit;
	int detik;
};

void inputDetik(waktu& input);
void proses(waktu& output, waktu input);
void print(waktu output, waktu input);

int main(){
	waktu input, output;
	inputDetik(input);
	proses(output, input);
	print(output, input);
	cout << endl;
}

void inputDetik(waktu& input){
	cout << "\nInput Detik : "; cin >> input.detik;
}

void proses(waktu& output, waktu input){
	output.jam = input.detik/3600;
	output.detik = input.detik%3600;
	output.menit = output.detik/60;
	output.detik = input.detik%60;
}

void print(waktu output, waktu input){
	cout << endl;
	cout << input.detik << " Detik = ";
	cout << output.jam << " Jam ";
	cout << output.menit << " Menit ";
	cout << output.detik << " Detik " << endl;
}

