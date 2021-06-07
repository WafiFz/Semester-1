#include <iostream> 
using namespace std; 

int main(){
    int check = 0;
    char arr[100]; 
    int n;

    cout << "Masukkan Panjang string : ";
    cin >> n;
    cout << "Masukkan String : ";
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i <= n / 2 && n != 0; i++) { 
        if (arr[i] != arr[n - i - 1]) { 
            check = 1; 
            break; 
        } 
    } 


    for (int i = 0; i < n; i++ ){
            cout << arr[i];
        }
        
    if (check == 1){ 
        cout <<  "\nBUKAN" ;
        } 
    else{
        cout <<  "\nYA";
        } 
}