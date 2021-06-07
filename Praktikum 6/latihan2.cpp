/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 14 Oktober 2020 
deskripsi: -Latihan 2- 
*/

#include <iostream>
using namespace std;

void fungsi(int a, int& b, int& c){
	b = ++a;
	c += b--;
	a = b + c;

	cout << a << b << c << endl;
}

int main(){
	int a, b, c, y;
	a = b = c = y = 2;

	fungsi (c, a, b);
	system("pause");
	cout << a << b << c << y;

	system("pause");

	fungsi(a+b, c, y);
	system("pause");
	cout << a << b << c << y;
}