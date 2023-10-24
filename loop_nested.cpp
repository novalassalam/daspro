#include <iostream>
using namespace std;


int main() {
    // Loop pertama (luar)
    for (int i = 1; i <= 3; i++) {
        cout<<i<<endl;
    }

     for (int i = 1; i <= 3; i++) {
        // Loop kedua (dalam)
        for (int j = 1; j <= 2; j++) {


             for (int k = 1; k <= 4; k++) {
            // Menampilkan hasil perkalian i dan j
            cout << i << " * " << k << " = " << i * k << endl;
        }
            // Menampilkan hasil perkalian i dan j
            // cout << i << " * " << j << " = " << i * j << endl;
        }
    }

    return 0;
}