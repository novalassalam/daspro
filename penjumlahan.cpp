#include <iostream>
using namespace std;

int main() {
    int angka1, angka2;

    // Meminta pengguna memasukkan dua angka
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    // Menghitung hasil penjumlahan
    int hasil = angka1 + angka2;

    // Menampilkan hasil
    cout << "Hasil penjumlahan: " << angka1 << " + " << angka2 << " = " << hasil << endl;

    return 0;
}
