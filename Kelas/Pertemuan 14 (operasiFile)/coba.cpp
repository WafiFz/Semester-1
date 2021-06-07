#include <iostream>
#include <fstream>
using namespace std;
void periksaFile(char nFile[]);
void enkripsi(char nFile[], char hasil[],int s);
void cetakFile(char nFile[]);
int main(){
int s;
char namaFile[50], isContinue;
char hasil[] = "fileEnkripsi.txt";
cout << "Masukkan nama file yang akan dienkripsi : "; cin >> namaFile;
cout << "Masukkan banyak pergeseran : "; cin >> s;
periksaFile(namaFile);
enkripsi(namaFile, hasil, s);
cout << "File telah dienkripsi." << endl;
is_continue :
cout << "Ingin menampilkannya disini (y/n)? "; cin >> isContinue;
cout << "==========================================================" << endl;
if (isContinue == 'y' || isContinue == 'Y'){
cetakFile(hasil);
}else if (isContinue == 'n' || isContinue == 'N'){
cout << "Silahkan buka fileEnkripsi.txt untuk melihat hasilnya." << endl;
}else{
cout << "Masukkan y atau n" << endl;
goto is_continue;
}
cout << "==========================================================" << endl;
}
void periksaFile(char nFile[]){
ifstream namafile;
namafile.open(nFile);
if (namafile.fail()){
cout << "File tidak ditemukan" << endl;}else {
cout << "File ditemukan" << endl;
}
namafile.close();
}
void enkripsi(char nFile[], char hasil[],int s){
ifstream namafile;
ofstream enkripsi;
char karakter;
namafile.open(nFile);
enkripsi.open(hasil);
while(!namafile.eof()){
namafile.get(karakter);
if (!namafile.eof() && isupper(karakter)){
enkripsi << char(int(karakter + s - 65) % 26 + 65);
}else if (!namafile.eof() && islower(karakter)){
enkripsi << char(int(karakter + s - 97) % 26 + 97);
}else if (!namafile.eof()){
enkripsi << karakter;
}
}
namafile.close();
enkripsi.close();
}
void cetakFile(char nFile[]){
ifstream namafile;
char karakter;
namafile.open(nFile);
while(!namafile.eof()){
namafile.get(karakter);
if(!namafile.eof()){
cout << karakter;
}
}
cout << endl;
}