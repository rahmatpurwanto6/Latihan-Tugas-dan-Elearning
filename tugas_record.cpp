#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	struct
	{
		char nim[5];
		char nama[15];
		float nilai;
		}
		mahasiswa;
		cout <<"Masukan NIM =";
		cin >>mahasiswa.nim;
		cout <<"Masukan Nama =";
		cin >>mahasiswa.nama;
		cout <<"Masukan Nilai Akhir =";
		cin >>mahasiswa.nilai;
		
		cout <<"\n\nData Yang di Inputkan adalah : \n\n";
		cout <<"NIM		=" <<mahasiswa.nim<<endl;
		cout <<"Nama		=" <<mahasiswa.nama<<endl;
		cout <<"Nilai Akhir	=" <<mahasiswa.nilai<<endl;
		getch();
		}