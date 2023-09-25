#include <iostream>
using namespace std; // library untuk memperingkas 
// aplikasi if else if
int main() {
    // kamus
    string username = "admins";
    string email = "admin@gmail.com";
    string password = "welcome";
    bool login = false;
    // algortima

    if(username == "admin" && password =="welcome"){
        login = true;
    }else if(email == "admin@gmail.com" && password =="welcome"){
        login = true;
    }else{
        login = false;
    }
    // output
    cout << "status login adalah:" <<login<<endl;
    return 0;
}