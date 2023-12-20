#include <iostream>
#include <string>

using namespace std;

int main() {
    // Mendeklarasikan variabel string
    string kata = "Hello, World!";

    // Mendeklarasikan pointer dan menginisialisasi dengan alamat string
    string *pointerKata = &kata;

    // Menampilkan nilai string dan alamatnya menggunakan pointer
    cout << "Nilai string: " << kata << endl;
    cout << "Alamat string: " << &kata << endl;
    cout << "Nilai melalui pointer: " << *pointerKata << endl;
    cout << "Alamat pointer: " << pointerKata << endl;

    return 0;
}
