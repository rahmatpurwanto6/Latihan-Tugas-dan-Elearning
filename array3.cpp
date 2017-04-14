#include <iostream>
using namespace std;

int main() {
int i, x;
cin >> x;
string nama[x];
for (i=0; i<x; i++) {
	cin >> nama[i];
	}
	for (i=0; i<x; i++) {
	cout << nama[i];
	}
	return 0;
}
