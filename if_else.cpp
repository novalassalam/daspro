#include <iostream>
using namespace std; // library untuk memperingkas 
// aplikasi if else
int main() {
    // kamus
    string username = "admin";
    string password = "welcome";
    bool login = false;
    // algortima

    if(username == "admin" && password =="welcome"){
        login = true;
    }else{
        login = false;
    }
    // output
    cout << "status login adalah:" <<login<<endl;
    return 0;
}