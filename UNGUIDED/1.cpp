#include <iostream>
using namespace std;

int main () {
	float bil1, bil2;
	
	cout << "Masukan bilangan 1: ";
	cin >> bil1;
	cout << "Masukan bilangan 2: ";
	cin >> bil2;
	
	cout << "Penjumlahan: " << bil1 + bil2 << endl;
	cout << "Pengurangan: " << bil1 - bil2 << endl;
	cout << "Perkalian: " << bil1 * bil2 << endl;
	
	if (bil2 !=0) {
		cout << "Hasil pembagian: " << bil1 / bil2 << endl;
	} else {
		cout << "Pembagian Error ." << endl;
	}
	return 0;
}
