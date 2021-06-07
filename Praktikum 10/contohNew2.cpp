/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi:  
*/

#include <iostream>
using namespace std;

int main(){
	//int number = 3;
	int* pNumber;

	pNumber = new int;
	*pNumber = 3;

	cout << pNumber << endl;
	cout << &pNumber << endl;
}