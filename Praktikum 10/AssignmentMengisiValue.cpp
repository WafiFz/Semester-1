/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi: -Assignment dengan mengisi Value yang ditunjuk-
*/

#include <iostream>
using namespace std;

int main(){
	int number = 3;
	int* pNumber;

	*pNumber = number;

	cout << &number << endl;
	cout << pNumber << endl;
	cout << &pNumber << endl;
}