#include <iostream>
using namespace std; // library untuk memperingkas 

int main() {
    int angka; // inputan bentuknya int
    bool sakit = true; // bolean
    float koordinat;
    char jk ='L';
    double phi;
    string alamat = "semarang timur no 32";

    // Meminta pengguna memasukkan bilangan bulat
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;  //cin untuk masukan
    // Menampilkan bilangan yang dimasukkan pengguna
    cout << "Anda memasukkan bilangan: " << angka <<endl;
    cout << "Jenis kelamin (default)" <<jk <<endl;
    cout << "Alamat (default)" <<alamat <<endl;

    return 0;
}