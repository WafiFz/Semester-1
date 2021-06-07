/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 4 November 2020 
deskripsi: -Tugas 2- 
*/

#include <iostream>
using namespace std;

void header(string isi){
	for (int i=1; i<= isi.length(); i++){
		cout << "=";

		if (i == isi.length()){
			cout << endl;
		}
	}

	cout << isi << endl;

	for (int i=1; i <= isi.length(); i++){
		cout << "=";

		if (i == isi.length()){
			cout << endl;
		}
	}
}

void menu(int& pilihan){
	header("----------MENU----------");
	cout << "1. Insertion Sort\n";
	cout << "2. Selection Sort\n";
	cout << "3. Merge Sort\n";
	cout << "4. Selesai\n";
	cout << "------------------------\n";
	cout << "Pilih Menu [1-4] : ";
	cin >> pilihan; 
}

void inputData(int data[], int& n){
	cout << "Input Banyak Data : "; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Data Ke-" << i+1 << " : "; cin >> data[i];
	} 
}

void printData(int data[], int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << data[i] << " ";
	}
}

void insertion(int data[], int n){
	int temp, j;
	for(int i = 0; i < n; i++){
        temp = data[i];
        j = i-1;
        while((temp < data[j]) && (j >= 0)){
            data[j+1]= data[j];    
            j = j-1;
        }
        data[j+1]=temp;
        printData(data, n);
    }
}

void selection(int data[], int n){
	int iMin, temp;
	for(int i = 0; i < n-1; i++){
		iMin = i;
		for(int j=i+1; j < n; j++){
			if(data[j] <= data[iMin]){
				iMin = j;
			}
			printData(data, n);	
		} 
		if (iMin != i) {
			temp = data[i];
			data[i] = data[iMin];
			data[iMin] = temp;
		}
		printData(data, n);	
	}
	cout << endl;
}

int main(){
	int data[10], data2[10];
	int n = sizeof(data)/sizeof(data[0]);
	int pilihan = 0;

	while (pilihan != 4){
		menu(pilihan);
		switch(pilihan){
			case 1 :
				cout << endl;
				header ("-INSERTION SORT-");
				inputData(data, n);
				insertion(data, n);
				cout << endl;
				break;

			case 2 : 
				header ("-INSERTION SORT-");
				inputData(data2, n);
				selection(data2, n);
				break;

			case 3 : 
				cout << endl;

				break;

			case 4 :
				cout << endl;
				header ("-PROGRAM SELESAI-");
				cout << endl;
				break;

			 default:
                system("cls");

                cout << "\nMenu tidak ada. Cek kembali daftar Menu!\n";
		}
	}
}
