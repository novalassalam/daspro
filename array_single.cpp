#include <iostream>
using namespace std;

int main(){
    // variabel array
    int nilai[5];
    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    // mengambil data ke pada array
    cout << "Nilai Ke 2: " << nilai[2] << endl;



    // variabel bertipe array
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};

    // mengambil data ke pada array
    cout << "Huruf: " << huruf[2] << endl;



    // mencetak isi array dengan perulangan
    for(int i = 0; i < 5; i++){
        cout << "Huruf ke : " << i << " - "<< huruf[i]<< endl;
    }



    //manipulasi array

    // mengubah isi data array
    huruf[2] = 'z';

    // mencetak isi array
    cout << "Huruf diubah: " << huruf[2] << endl;

    //mengambil banyaknya array
    int length = sizeof(huruf) / sizeof(*huruf);
    cout << "Panjang array huruf : " << length << endl;



    return 0;
}