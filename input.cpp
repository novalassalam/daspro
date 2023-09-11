#include <iostream>
using namespace std; // library untuk memperingkas 

int main() {
    int angka; // inputan bentuknya int
    // Meminta pengguna memasukkan bilangan bulat
    std::cout << "Masukkan sebuah bilangan bulat: ";
    std::cin >> angka; //cin untuk masukan

    // Menampilkan bilangan yang dimasukkan pengguna
    std::cout << "Anda memasukkan bilangan: " << angka << std::endl;

    return 0;
}
