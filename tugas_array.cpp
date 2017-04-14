#include <iostream>
using namespace std;
int a[10],jumlah=10;
bool cari(int cariData, int nElemen) {
	int i;
	for (i=0; i<nElemen; i++) {
		if(a[i] == cariData)
		break;
	}
	if(i == nElemen) return false;
	else return true;
}
void input(int data, int i) {
a[i]=data;
}

void hapus(int data, int nElemen) {
		int i;
		for (i=0; i<nElemen; i++) {
			if (data == a[i])
				break;
		}
		if (i == nElemen) cout <<"Data"<<data<<"tidak terhapus (tidak ada)"<<endl;
		else {
			for  (int j=i; j<nElemen-1; j++) {
				a[j] = a[j+i];
			}
			cout <<"Data"<<data<<"dihapus"<<endl;
		}
}

void tampil (int nElemen) {
	for (int i=0; i<nElemen; i++)
		cout << a[i] <<" ";
		cout << endl;
}

int main() {
	int data;
	for (int i=0; i<jumlah; i++) {
		cout <<"a["<<i<<"]=";
		cin >> data;
		input(data,i);
	}
	tampil(jumlah);
	int cariData=12;
	if (cari(cariData,jumlah)==false)
		cout <<"Data"<<cariData<<"tidak ditemukan"<<endl;
	else
		cout <<"Data"<<cariData<<"ditemukan"<<endl;
	hapus(89,jumlah);
	jumlah--;
	hapus(0,jumlah);
	jumlah--;
	tampil(jumlah);
}