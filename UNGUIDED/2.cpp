#include <iostream>
using namespace std;
string Tulisan(int angka) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", 
                        "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", 
                        "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    
    if (angka == 100) {
        return "seratus";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        int puluh = angka / 10;
        int sisa = angka % 10;
        
        if (sisa == 0) {
            return puluhan[puluh];
        } else {
            return puluhan[puluh] + " " + satuan[sisa];
        }
    }
}

int main() {
    int angka;
    cout << "Input angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "ERROR!!." << endl;
    } else {
        cout << "Maka angka " << angka << " dalam tulisan adalah : " << Tulisan(angka) << endl;
    }
	return 0;
}

