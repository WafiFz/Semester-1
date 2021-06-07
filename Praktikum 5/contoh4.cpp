/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 11 Oktober 2020 
deskripsi: -Contoh 4- 
			Penggunaan continue
*/

#include <iostream>
using namespace std;
int main() {
	int i = 0;
	while (i < 5){
		if (i == 3){
			i++;
			continue;
		}
		cout << i << endl;
		i++;
	}
}