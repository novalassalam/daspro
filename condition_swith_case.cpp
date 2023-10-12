#include <iostream>
using namespace std;

int main(){

    char grade;

    cout << "Inputkan grade: ";
    cin >> grade;


// STRUKTURNYA
//     switch(variabel){
//     case <value>:
//         // blok kode
//         break;
//     case <value>:
//         // blok kode
//         break;
//     default:
//         // blok kode
// }

    switch (toupper(grade)){
        case 'A':
            cout << "Luar biasa!" << endl;
            break;
        case 'B': //nilai kosong maka nilai defaultnya adalah setelahnya (C)
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda lulus" << endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
    }

    return 0;
}