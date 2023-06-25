/*
    RAHMADINI CAHYA D. (A11.2022.14464)(A11.4212)
    21 JUNI 2023
    Latihan 2
    Buat structure sepeda dengan member:
    • Merk = "Polygon"
    • Type = "Sepeda Gunung"
    • Tahun = 2013
    • Harga = "2.000.000"
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

    // Mengisi data sepeda
    sepeda.merk = "Polygon";
    sepeda.type = "Sepeda Gunung";
    sepeda.tahun = 2013;
    sepeda.harga = "2.000.000";

    // Menampilkan data sepeda
    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << sepeda.type << endl;
    cout << "Tahun: " << sepeda.tahun << endl;
    cout << "Harga: " << sepeda.harga << endl;

    return 0;
}
