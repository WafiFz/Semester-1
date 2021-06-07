/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 12 November 2020 
deskripsi: -Latihan Array- 
*/

#include <iostream>
using namespace std;

int data[8] {1,2,1,0,2,0,0,1};
int n = sizeof(data)/sizeof(data[0]);
void header(string isi);
void pengurutan(int& urutan);
void metode(int& pilihan);
void inputData(int data[], int& n);
void printData(int data[], int n);
void swap(int& a, int& b);
void bubble(int data[], int n);
void bubble2(int data[], int n);
void selection(int data[], int n);
void selection2(int data[], int n);
void insertion(int data[], int n);
void insertion2(int data[], int n);
void shell(int data[], int n);
void shell2(int data[], int n);


int main(){
	int pilihan = 0;
	int urutan = 0;
	pengurutan(urutan);
	if (urutan !=1 && urutan !=2){
		cout << "\nPilihan tidak ada. Cek kembali daftar Pilihan!\n";
	}else {
		metode(pilihan);
		switch(pilihan){
			case 1 : 
				cout << endl;
				header ("-BUBBLE SORT-");
				cout << "\n== ANGKA PADA TTL ==\n";
				printData(data, n); cout << "\n";
				if(urutan == 1){
					bubble(data, n);
				}
				if (urutan == 2){
					bubble2(data,n);
				}
				cout << "\n\n== HASIL BUBBLE SORT ==\n";
				printData(data, n); cout << "\n\n";
				break;

			case 2 : 
				cout << endl;
				header ("-SELECTION SORT-");
				cout << "\n== ANGKA PADA TTL ==\n";
				printData(data, n); cout << "\n";
				if(urutan == 1){
					selection(data, n);
				}
				if (urutan == 2){
					selection2(data, n);
				}
				cout << "\n== HASIL SELECTION SORT ==\n";
				printData(data, n); cout << "\n\n";
				break;

			case 3 :
				cout << endl;
				header ("-INSERTION SORT-");
				cout << "\n== ANGKA PADA TTL ==\n";
				printData(data, n); cout << "\n";
				if(urutan == 1){
					insertion(data, n);
				}
				if (urutan == 2){
					insertion2(data, n);
				}
				cout << "\n\n== HASIL INSERTION SORT ==\n";
				printData(data, n); cout << "\n\n";
				cout << endl;
				break;

			case 4 :
				cout << endl;
				header ("-SHELL SORT-");
				cout << "\n== ANGKA PADA TTL ==\n";
				printData(data, n); cout << "\n";
				if(urutan == 1){
					shell(data, n);
				}
				if (urutan == 2){
					shell2(data, n);
				}
				cout << "\n\n== HASIL SHELL SORT ==\n";
				printData(data, n); cout << "\n\n";
				cout << endl;
				break;

			 default:
	            system("cls");
	            cout << "\nPilihan tidak ada. Cek kembali daftar Pilihan!\n";
		}
	}

	
}

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

void pengurutan(int& urutan){
	header("-------PENGURUTAN-------");
	cout << "1. Ascending\n";
	cout << "2. Descending\n";
	cout << "------------------------\n";
	cout << "Pilih Pengurutan [1-2] : "; cin >> urutan;
	cout << endl; 
}

void metode(int& pilihan){
	header("----------METODE----------");
	cout << "1. Bubble Sort\n";
	cout << "2. Selection Sort\n";
	cout << "3. Insert Sort\n";
	cout << "4. Shell Sort\n";
	cout << "------------------------\n";
	cout << "Pilih Metode [1-4] : ";
	cin >> pilihan; 
}

void printData(int data[], int n){
	cout << endl;
	for (int i = 0; i < n; i++){
		cout << data[i] << " ";
	}
}

void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void bubble(int data[], int n){
	cout << endl;
	cout << "\n== PROSES BUBBLE SORT (Ascending)==\n";
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n-i-1; j++){
			if (data[j] > data[j+1])
				swap(data[j], data[j+1]);
		}
		printData(data, n);
	}		
}

void bubble2(int data[], int n){
	cout << endl;
	cout << "\n== PROSES BUBBLE SORT (Descending) ==\n";
	for (int i = n-1; i > 0; i--){
		for (int j = 0; j < i; j++){
			if (data[j] < data[j+1])
				swap(data[j], data[j+1]);
		}
		printData(data, n);
	}		
}

void selection(int data[], int n){
	int iMin, temp;
	cout << "\n== PROSES SELECTION SORT (Ascending)==\n";
	for(int i = 0; i < n-1; i++){
		iMin = i;
		printData(data, n);	
		for(int j=i+1; j < n; j++){
			if(data[j] <= data[iMin]){
				iMin = j;
			}
		} 
		
		if (iMin != i) {
			temp = data[i];
			data[i] = data[iMin];
			data[iMin] = temp;
		}
	}	
	cout << endl;
}

void selection2(int data[], int n){
	int iMin, temp;
	cout << "\n== PROSES SELECTION SORT (Descending) ==\n";
	for(int i = 0; i < n-1; i++){
		iMin = i;
		printData(data, n);	
		for(int j=i+1; j < n; j++){
			if(data[iMin] <= data[j]){
				iMin = j;
			}
		} 
		
		if (iMin != i) {
			temp = data[iMin];
			data[iMin] = data[i];
			data[i] = temp;
		}
	}	
	cout << endl;
}

void insertion(int data[], int n){
	cout << "\n== PROSES INSERTION SORT (Ascending) ==\n";
	for (int i = 1; i<n; i++){
        for (int j = i; j>=1; j--){
            if (data[j] < data[j-1]){
                swap(data[j], data[j-1]);
            }
            else{
                break;
            }
            printData(data, n);   
        }
    }
        
}

void insertion2(int data[], int n){
	cout << "\n== PROSES INSERTION SORT (Descending) ==\n";
	for (int i = 1; i<n; i++){
        for (int j = i; j>=1; j--){
            if (data[j] > data[j-1]){
                swap(data[j], data[j-1]);
            }
           
            else{
                break;
            }
            printData(data, n); 
        }
    }
}


void shell(int data[], int n){
	int j;
	cout << endl;
	cout << "\n== PROSES SHELL SORT (Ascending) ==\n"; 
	for (int jarak = n / 2; jarak > 0; jarak /= 2)  {
		for (int i = jarak; i < n; i++) {
			int temp = data[i];
	   		for (j=i; j>=jarak && temp < data[j - jarak]; j -= jarak){
		  		data[j] = data[j - jarak];
	   		}
	   		data[j] = temp;
	   		printData(data,n);
		}
	}
}

void shell2(int data[], int n){
	int j;
	cout << endl;
	cout << "\n== PROSES SHELL SORT (Descending) ==\n"; 
	for (int jarak = n / 2; jarak > 0; jarak /= 2)  {
		for (int i = jarak; i < n; i++) {
			int temp = data[i];
	   		for (j=i; j>=jarak && temp > data[j - jarak]; j -= jarak){
		  		data[j] = data[j - jarak];
	   		}
	   		data[j] = temp;
	   		printData(data,n);
		}
	}
}



