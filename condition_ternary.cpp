#include <iostream>
using namespace std;

int main(){
// STRUKTURNYA
// (kondisi) ? true : false
    int jawaban;

    cout << "Berapakah hasil 5*5?" << endl;
    cout << "jawab> ";
    cin >> jawaban;

    string hasil = (jawaban == 25) ? "Benar" : "Salah";
    cout << "Jawaban anda: " << hasil << endl;

    return 0;
}