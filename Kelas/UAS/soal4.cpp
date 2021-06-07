#include <iostream>
using namespace std;

int main(){
  	int n;
  	cin >> n;
    for (int i=n; i>=0; i--){
        if (i == 0){
            cout << "Mati satu tinggal induknya";
        }else {
            cout << "Anak ayam turunlah  " << i << endl;
        }
    }
}