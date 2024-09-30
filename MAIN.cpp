#include <iostream>

using namespace std;

int main()
{
    int angka = 9;
    float desimal = 8.9;
    string kalimat = "Ilham";
    double tinggi = 11.5;
    char jenis_kelamin = 'L';
    bool isTerang = true;

    cout << "Angka: " << angka << endl;


    int angka;
    cout << "MASUKAN ANGKA" << endl;
    cin >> angka;

    cout << "ANGKA : " << angka << endl;

    getch();

    int angka1 = 4;
    int angka2 = 5;
	bool hasil = (angka1 == angka2);

    cout << "Hasilnya adalah : " << boolalpha << hasil << endl;

    bool kondisi1 = false;
    bool kondisi2 = false;

    bool hasil = (kondisi1 || kondisi2);

    cout << "Hasilnya adalah : " << boolalpha << hasil << endl;


    string kata;
    cout << "Masukan kata = HALO" << endl;
    cin >> kata;

    if (kata == "HALO"){
        cout << "kata sesuai" << endl;
        } else{
        cout << "salah" << endl;
    }

    int tv;

    cout << "Daftar channel tv" << endl;
    cout << "1. VINDES" << endl;
    cout << "2. NET TV" << endl;

    cout << "Masukan channel pilihan : ";
    cin >> tv;

    switch(tv) {
    case 1 :
        cout << "SWITCH TO VINDES" << endl;
        break;
    case 2 :
        cout << "SWITCH TO NET TV" << endl;
        break;
    default :
        cout << "INPUT CHANEL" << endl;

    }
    
    int i;
    for(i=0; i<5; i++){
        cout << "HELLO WORLD" << endl;
    }

    for(int i=5; i>1; i--)
        cout << i-1 << "HELLO WORLD" << endl;

}

