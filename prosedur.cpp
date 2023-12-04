#include <iostream>

// Menggunakan namespace std untuk kemudahan penggunaan fungsi-fungsi dari C++ Standard Library
using namespace std;

// Proses untuk menyapa pengguna
void sapaPengguna() {
    cout << "Halo! Selamat datang di program sederhana." << endl;
}


// Proses untuk menyapa pengguna dengan nama
void sapaPengguna_par(string nama) {
    cout << "Halo, " << nama << "! Selamat datang di program sederhana." << endl;
}


// Proses untuk melakukan looping pada array nama
void looping(string dataNama[], int jumlahNama) {
    for (int i = 0; i < jumlahNama; ++i) {
        //panggil fungsi lain juga bisa
        sapaPengguna_par(dataNama[i]);
    }
}


int main() {
    // Panggil prosedur sapaPengguna()
    sapaPengguna();

    string namaPengguna = "noval";
    sapaPengguna_par(namaPengguna);


    string dataNama[] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    looping(dataNama, sizeof(dataNama) / sizeof(dataNama[0]));


    // Program selesai
    return 0;
}
