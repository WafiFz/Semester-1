/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 30 September 2020 
deskripsi: -Nomor 4- 
*/

#include <iostream>
using namespace std;

int main(){
	int a, b, c, menang, kalah;

 	cout << "\nTim ke-1 : ";
 	cin >> a;

 	cout << "Tim ke-2 : ";
 	cin >> b;

 	if(a>b){
  	 cout << "\nHasil dari pertandingan adalah kemenangan untuk tim ke-1.\n";
  		}else if(a<b){
  	 cout << "\nHasil dari pertandingan adalah kemenangan untuk tim ke-2.\n";
  		}else if(a==b) {
    cout << "\nHasil dari pertandingan adalah seri.\n"; 
  		}else {
    cout << "\nAnda Salah Memasukkan\n";
  }
}
