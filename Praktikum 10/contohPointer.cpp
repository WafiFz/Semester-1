/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi: -Contoh Pointer- 
*/

#include <iostream>
using namespace std;

int main(){
	int number = 4;
	int* pNumber;

	pNumber = &number;

	cout << *pNumber << endl;
	cout << pNumber << endl;
}

