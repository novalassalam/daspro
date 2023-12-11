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
    // Mendeklarasikan array of structure "Person"
    const int numberOfPeople = 3;
    Person people[numberOfPeople];

    // Mengisi nilai anggota struktur untuk setiap elemen dalam array
    people[0].name = "John";
    people[0].age = 25;

    people[1].name = "Alice";
    people[1].age = 30;

    people[2].name = "Bob";
    people[2].age = 28;

    // Menampilkan nilai anggota struktur untuk setiap elemen dalam array
    for (int i = 0; i < numberOfPeople; ++i) {
        cout << "Person " << i + 1 << ":\n";
        cout << "Name: " << people[i].name << endl;
        cout << "Age: " << people[i].age << endl << endl;
    }

    return 0;
}
