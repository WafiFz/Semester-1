/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi: -Contoh Referensi- 
*/

#include <iostream>
using namespace std;

void print (int a, int b){
	cout << a << ", " << b << endl;
}

int main(){
	int three = 3;
	int& tiga = three;

	print(three, tiga);
	--three;
	print(three, tiga);
	tiga *= 2;
	print(three, tiga);
}