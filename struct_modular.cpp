#include <iostream>
#include <string>

// Menggunakan namespace std
using namespace std;

// Mendefinisikan struktur "Address" dengan anggota "city" dan "country"
struct Address {
    string city;
    string country;
};

// Mendefinisikan struktur "Person" dengan anggota "name", "age", dan "address" yang merupakan struktur lainnya
struct Person {
    string name;
    int age;
    Address address;
};

int main() {
    // Membuat objek dari struktur "Person" dengan objek "Address" di dalamnya
    Person person1;
    
    // Mengisi nilai anggota struktur
    person1.name = "John";
    person1.age = 25;
    person1.address.city = "New York";
    person1.address.country = "USA";

    // Menampilkan nilai anggota struktur
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "City: " << person1.address.city << endl;
    cout << "Country: " << person1.address.country << endl;

    return 0;
}
