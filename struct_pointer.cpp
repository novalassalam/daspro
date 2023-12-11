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
    // Mendeklarasikan pointer of structure "Person"
    Person *personPtr;

    // Mengalokasikan memori untuk satu objek struktur "Person"
    personPtr = new Person;

    // Mengisi nilai anggota struktur melalui pointer
    personPtr->name = "John";
    personPtr->age = 25;

    // Menampilkan nilai anggota struktur melalui pointer
    cout << "Name: " << personPtr->name << endl;
    cout << "Age: " << personPtr->age << endl;

    // Melepaskan memori yang dialokasikan
    delete personPtr;

    return 0;
}
