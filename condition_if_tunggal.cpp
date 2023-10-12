#include <iostream>
using namespace std; // library untuk memperingkas 

int main() {
    int angka = 1;
    string hasil = "ganjil";

    // Meminta pengguna memasukkan nilai
    cout << "Masukkan angka 1/2: ";
    cin >> angka;

    // Memeriksa apakah angka lebih besar dari 5
    if (angka ==2) {
        hasil = "genap";
    }

    cout << "Bilangan itu: "<<hasil << endl;

    return 0;
}
