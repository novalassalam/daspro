#include <iostream>
using namespace std;

int main(){

    // baris, kolom
    int matriks[2][3] = {
        {1, 3, 5},
        {2, 4, 9}
    };
    // index baris 1, index kolom 2
    printf("Isi Data pada indeks ke-(1,2): %d\n", matriks[1][2]);

    return 0;
}