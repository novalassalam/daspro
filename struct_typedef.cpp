#include <iostream>
#include <string>

// Menggunakan namespace std
using namespace std;

// Mendefinisikan struktur "PersonInfo" dengan anggota "name" dan "age"
typedef struct {
    string name;
    int age;
} PersonInfo;

int main() {
    // Membuat objek dari struktur "PersonInfo"
    PersonInfo person1;
    
    // Mengisi nilai anggota struktur
    person1.name = "John";
    person1.age = 25;

    // Menampilkan nilai anggota struktur
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;

    return 0;
}
