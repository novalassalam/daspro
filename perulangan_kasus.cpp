// #include <iostream>
// using namespace std;
// kasus dalam perulangan


// for
// Kalau jumlah perulangannya sudah diketahui dari awal
// Perulangan akan berhenti otomatis setelah kondisi tidak terpenuhi.
// 
// int main() {
//     int N, sum = 0;
//     cout << "Masukkan N: ";
//     cin >> N;

//     for (int i = 1; i <= N; i++) {
//         if (i % 2 != 0)
//             sum += i;
//     }

//     cout << "Jumlah bilangan ganjil dari 1 sampai " << N << " = " << sum << endl;
//     return 0;
// }


// while
// while akan mengecek kondisi dulu, baru masuk ke perulangan.
// kondisi perulangan tidak pasti
// Jadi kalau kondisi awal sudah salah, blok di dalam while tidak akan dijalankan sama sekali.

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string password;

//     cout << "Masukkan password: ";
//     cin >> password;

//     while (password != "rahasia") {
//         cout << "Password salah, coba lagi: ";
//         cin >> password;
//     }

//     cout << "Login berhasil!" << endl;
//     return 0;
// }


//do while
// menjalankan isi dulu, baru memeriksa kondisi setelahnya.
// harus jalan sekali
#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "\n==============================\n";
        cout << "  CHATBOT SEDERHANA  \n";
        cout << "==============================\n";
        cout << "Silahkan Pilih Menu \n";
        cout << "1. Sapaan\n";
        cout << "2. Tampilkan tanggal (contoh)\n";
        cout << "3. Keluar\n";
        cout << "------------------------------\n";
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Halo! Senang bertemu denganmu \n";
        } 
        else if (pilihan == 2) {
            cout << "Hari ini tanggal 19 Oktober 2025 \n";
        } 
        else if (pilihan == 3) {
            cout << "Terima kasih! Program selesai \n";
        } 
        else {
            cout << "Pilihan tidak valid, coba lagi!\n";
        }

    } while (pilihan != 3);  // ulangi selama belum memilih keluar  melakukan perulangan sekali dan jalan terus selama pilihan != 3

    return 0;
}
