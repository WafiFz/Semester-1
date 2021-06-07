/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi: -Latihan- 
*/

#include <iostream>
using namespace std;

int main(){
	int n = 1;
	int* p = &n;

	cout << n << endl;
	cout << &n << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << &p << endl;
	cout << &(*p) << endl;
}