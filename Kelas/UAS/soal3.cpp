#include <iostream>
using namespace std;


void isPrima(int bil){
    int prima;

    for (int i=2; i <= bil; i++) {
        for (int j=2; j < i; j++) {
            if (i % j == 0) {
                prima = 0;
                break;
            }
        }

        if (i == 1){
        cout << i  << " ";
               prima = 1;
    }

    }
}

int main() {
    int angka, prima=1;
    cout << "Masukkan angka : ";
    cin >> angka;
    isPrima(angka);
              

 

  
}