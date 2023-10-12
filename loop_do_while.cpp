#include <iostream>
using namespace std;
// do
// {
//     Blok Pernyataan;
// }

// Do…while digunakan untuk mengulang statement sebanyak satu kali terlebih dahulu, 
// kemudian akan mengecek statement didalam while apakah bernilai benar, 
// jika bernilai benar maka akan diulang kembali. 
// Jika statement di dalam while bernilai salah maka perulangan akan berakhir.

int main() {
	int a = 1; //kondisi awal

	do { //lakukan perulangan
        
        // statementnya
		cout<<a<<endl;
		a++;

	} while(a <= 10); //akan berhenti ketika kondisi ini
	cout<<"Nilai terakhir a = "<<a<<endl;
}