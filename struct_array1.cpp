#include <iostream>
#include <string>
using namespace std;

struct Person {
    string hobbies[3];
};

int main() {
    Person person1;

    // Mengisi array dalam struct
    person1.hobbies[0] = "lari";
    person1.hobbies[1] = "Gaming";
    person1.hobbies[2] = "Swimming";

    cout << "\nHobbies: " << endl;
    cout << "- " << person1.hobbies[0] << endl;
    cout << "- " << person1.hobbies[1] << endl;


    return 0;
}
