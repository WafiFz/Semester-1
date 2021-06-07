/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 21 Oktober 2020 
deskripsi: -Soal 4-
*/

#include <iostream>
using namespace std;

void bentukTurus(int angka);
bool ganjil(int angka);
bool prima(int angka);


int main()
{
    int angka;
    cout << "Masukkan angka : "; 
    cin >> angka;
    cout << endl;

    cout << "Bentuk turus :";
    bentukTurus(angka);
  	
    cout << angka << " adalah ";
    if(ganjil(angka)){
        cout << "bilangan ganjil";
    }else{
        cout << "bilangan genap";
    }
    cout << endl;
    
    cout << angka << " adalah ";
    if(prima(angka)){
        cout << "bilangan prima";
    }else{
        cout << "bilangan non-prima";
    }

    cout << endl;
}

void bentukTurus(int angka){
    for(int i = 1; i <= angka;i++){
        cout << "I";
        if(i % 5 == 0) cout << " ";
    }
    cout << endl;
}

bool ganjil(int angka){
    return angka % 2 != 0;
}

bool prima(int angka){
    bool prima = true;
    if(angka == 1 || angka == 0){
        prima = false;
    }
    for(int i = 2; i<= (angka/2); ++i){
        if(angka % i == 0){
            prima = false;
            break;
        }
    }
    return prima;
}