#include <iostream>
#include <fstream>
using namespace std;
bool periksaFile(char nFile[]);
int cariJumlahChar(char nFile[], char huruf);
int main(){
char namaFile[20];
char karakter, huruf;
is_available:
cout << "Nama file (ikuti dengan .txt): "; cin.getline(namaFile, 20);
if (periksaFile(namaFile)){
cout << "Karakter yang akan dicari : "; cin >> huruf;
cout << "Jumlah karakter yang dicari : " << cariJumlahChar(namaFile, huruf);
} else {
goto is_available;
}
}
bool periksaFile(char nFile[]){
bool ada;
ifstream fileText;
fileText.open(nFile);
if(fileText.fail()){
cout << "File tidak ditemukan, mohon periksa kembali" << endl;
ada = false;
}else {
cout << "File ditemukan" << endl;
ada = true;
}
fileText.close();
return ada;}
int cariJumlahChar(char nFile[], char huruf){
char karakter, opposite;
int jumlahChar=0;
ifstream fileTeks;
fileTeks.open(nFile);
if (isupper(huruf)){
opposite = huruf+32;
}else if (islower(huruf)){
opposite = huruf-32;
}
while(!fileTeks.eof()){
fileTeks.get(karakter);
if((karakter == huruf || karakter == opposite) && (!fileTeks.eof())){
jumlahChar += 1;
}
}
fileTeks.close();
return jumlahChar;
}