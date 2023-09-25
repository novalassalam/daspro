#include <iostream>
using namespace std; // library untuk memperingkas 
// aplikasi nested if
int main() {
    // kamus
    string username = "admins";
    string password = "welcome";
    // algortima

    if (username == "admins"){
        if (password == "welcome"){
            cout << "Selamat datang bos!" << endl;
        } else {
            cout << "Password salah, coba lagi!" << endl;
        }
    } else {
        cout << "Anda tidak terdaftar" << endl;
    }
    return 0;
}