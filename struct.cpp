#include <iostream>
#include <string>

// Menggunakan namespace std
using namespace std;

// Mendefinisikan struktur "Person" dengan anggota "name" dan "age"
struct Person {
    string name;
    int age;
};

int main() {
    // Membuat objek dari struktur "Person"
    Person person1;

    // Mengisi nilai anggota struktur
    person1.name = "John";
    person1.age = 25;

    // Menampilkan nilai anggota struktur
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}
