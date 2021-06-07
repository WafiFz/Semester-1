/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Latihan 3- 
*/

#include <iostream>
using namespace std;

typedef int larik[100];

int main(){
	larik x, int n;
	cout << "Banyak Data : "; cin >> n;
	input(x, n);
	cout << "Data sebelum sorting:\n"; print(x, n);
	sortingDescending(x, n);
	cout << "Data setelah sorting:\n"; print(x,n);


	
}

void input(larik x, int n){
	for(int i=0; i<n; i++){
		cout << "Input data ke-" << i+1 << ": ";
		cin >> x[i];
	}
}

void print(larik x, int n){
	for(int i=0; i<n; i++){
		cout << x[i] << " ";
	}
}

void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void sortingDescending(int arr[], int n){
	cout << endl;
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (arr[j] < arr [j+1])
				swap(arr[j], arr[j+1]);
		}
		printArr(arr, n);
		cout << endl;
	}		
}

