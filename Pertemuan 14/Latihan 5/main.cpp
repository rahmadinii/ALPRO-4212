/*
    RAHMADINI CAHYA D. (A11.2022.14464)(A11.4212)
    21 JUNI 2023
    Latihan 5
    Buat structure sepeda dengan member:
    • Merk = "Polygon"
    • Type = "Sepeda Gunung"
    • Tahun = 2013
    • Harga = "2.000.000"

    Lakukan akses member menggunakan pointer dalam structure.

*/
#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda;

    // Mengisi data sepeda menggunakan pointer
    Sepeda* Sepeda = &sepeda;
    Sepeda->merk = "Polygon";
    Sepeda->type = "Sepeda Gunung";
    Sepeda->tahun = 2013;
    Sepeda->harga = "2.000.000";

    // Mencetak data sepeda menggunakan pointer
    cout << "Merk: " << Sepeda->merk << endl;
    cout << "Type: " << Sepeda->type << endl;
    cout << "Tahun: " << Sepeda->tahun << endl;
    cout << "Harga: " << Sepeda->harga << endl;

    return 0;
}
