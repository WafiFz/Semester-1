/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Latihan 1- 
*/

#include <iostream>
using namespace std;

void swap (int& x, int & y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

main(){
	int x, y;
	cout << "X = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;

	swap (x,y);

	cout << "\nSWAP\n" << endl;
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
}