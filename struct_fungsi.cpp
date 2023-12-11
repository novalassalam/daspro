#include <iostream>
#include <string>

// Menggunakan namespace std
using namespace std;

// Mendefinisikan struktur "Person" dengan anggota "name" dan "age"
struct Person {
    string name;
    int age;
};

// Fungsi untuk menampilkan informasi seorang individu (objek Person)
void displayPersonInfo(const Person& person) {
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
}
// const karena tidak akan berubah
// Person&: Ini adalah referensi ke objek tipe Person. Penggunaan referensi (&) memungkinkan kita bekerja dengan objek tanpa melakukan salinan sebenarnya dari objek tersebut.

int main() {
    // Membuat objek dari struktur "Person"
    Person person1;
    
    // Mengisi nilai anggota struktur
    person1.name = "John";
    person1.age = 25;

    // Menampilkan informasi menggunakan fungsi
    displayPersonInfo(person1);

    return 0;
}
