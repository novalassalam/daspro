#include <iostream>
using namespace std;

int main() {
    // Loop pertama (luar)
    for (int i = 1; i <= 3; i++) {
        // Loop kedua (dalam)
        for (int j = 1; j <= 3; j++) {
            // Menampilkan hasil perkalian i dan j
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    return 0;
}