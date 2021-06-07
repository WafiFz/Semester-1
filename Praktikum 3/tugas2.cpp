/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 27 September 2020 
deskripsi: -Tugas 2- 
*/

#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	a = 100;	// (1) a masih 100
	cout << "a = " << a << endl;
	
	b = 30; 	// (2) b masih 30
	cout << "b = " << b << endl;


	b = ++a; 	// (3) b = 101
	cout << "b = " << b << endl;
	
	b++; 		// (4) b = 102
	cout << "b = " << b << endl;//(7)c=204
	
	c = (a--) + (++b); // c = 204 
	cout << "c = " << c << endl;//(7)c=204

	//cout << "a = " << a << endl;//(5)a=100
	//cout << "b = " << b << endl;//(6)b=103
	//cout << "c = " << c << endl;//(7)c=204
}