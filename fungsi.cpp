#include <iostream>
using namespace std;

// Fungsi tanpa parameter
int non_par() {
    return 12;
}

// Fungsi dengan parameter
int tambahkan(int a, int b) {
    return a + b;
}


// Fungsi dengan default parameter
int tambahkan_default(int a, int b , int z=5) {
    return a + b + z;
}

int main() {


    int tanpa_par = non_par();
    // Tampilkan hasil
    cout << "Fungsi non parameter: " << tanpa_par << endl;



    int hasilPenambahan = tambahkan(3, 4);
    // Tampilkan hasil
    cout << "Fungsi parameter dinamis: " << hasilPenambahan << endl;

    int tambahkan_def = tambahkan_default(1, 4);
    // Tampilkan hasil
    cout << "Fungsi parameter default: " << tambahkan_def << endl;

    return 0;
}
