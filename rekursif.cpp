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
        cout << pow << " ";
        return 1 ;
    } else {
        cout << pow<< " ";
        // Panggil fungsi rekursif dengan eksponen yang berkurang
        return n * pangkat(n, pow - 1);
    }
}

int faktorial(int n) {
    // Kondisi terminasi
    if (n == 0 || n == 1) {
        cout <<n << " ";
        return 1;
    } else {
        cout <<n << " ";
        // Panggil fungsi rekursif dengan nilai yang berkurang
        return n * faktorial(n - 1);
    }
}

// Fungsi rekursif untuk menghitung deret Fibonacci
int fibonacci(int n) {
    // Kondisi terminasi
    if (n <= 1) {
        cout << n << "+ ";
        return n;
    } else {
        cout << n << "- ";
        // Panggil fungsi rekursif dengan nilai yang berkurang
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n = 5;
    cout << "Contoh Rekursif: ";
    fungsiRekursif1(n);
    cout << endl;



    int basis = 2;
    int eksponen = 3;
    cout << pangkat(basis, eksponen) << endl;

    int nilai = 4;
    cout << faktorial(nilai) << endl;


    int fib = 4;

    cout << "Deret Fibonacci hingga indeks " << fib << " adalah: ";
    for (int i = 0; i <= fib; ++i) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
