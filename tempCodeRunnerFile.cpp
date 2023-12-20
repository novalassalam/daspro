#include <iostream>

using namespace std;

// Fungsi rekursif sederhana
void fungsiRekursif1(int n) {
    if (n <= 0) {
        return;
    }
    // nilai urut 5-1
    cout << n << " ";
    // Panggil fungsi rekursif dengan nilai yang berkurang
    fungsiRekursif1(n - 1);
        // Pencetakan nilai setelah rekursi (pasca-rekursi) maka nilai terbalik sesuai dengan proses rekursi
    cout << n << " "; // nilai kebalik 1-5

}

// Fungsi rekursif untuk menghitung pangkat
int pangkat(int n, int pow) {
    // Kondisi terminasi
    if (pow == 0) {
        return 1 ;
    } else {
        pangkat(n, pow - 1);
        cout << n << " ";
        n * pangkat(n, pow - 1);
        cout <<n * pangkat(n, pow - 1);
        // Panggil fungsi rekursif dengan eksponen yang berkurang
        // return n * pangkat(n, pow - 1);
    }
}


int main() {
    int n = 5;
    cout << "Contoh Rekursif: ";
    fungsiRekursif1(n);
    cout << endl;



    int basis = 2;
    int eksponen = 3;
    pangkat(basis, eksponen);
    cout << endl;
    // cout << pangkat(basis, eksponen) << endl;
    return 0;
}
