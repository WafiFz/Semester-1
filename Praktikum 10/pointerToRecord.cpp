/*
Nama     : Wafi Fahruzzaman
NPM      : 140810200009
tangggal : 18 November 2020 
deskripsi: -Pointer to Record- 
*/

#include <iostream>
using namespace std;

struct student {
	char id[20];
	char name[20];
};

typedef student* pointer;

int main(){
	pointer someone;
	someone = new student;

	cout << "Student Data Input \n";
	cout << "ID: "; cin >> someone->id;
	cout << "Name: "; cin >> someone->name;

	cout << "\nStudent Data Output\n";
	cout << someone->id << " " << someone->name;
}