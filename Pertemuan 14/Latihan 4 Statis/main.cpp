/*
    RAHMADINI CAHYA D. (A11.2022.14464)(A11.4212)
    21 JUNI 2023
    Latihan 4 Statis
    Cetak data berikut menggunakan array of structure:
    1. Nim: A11.2020.01234, Nama: Andi, Jurusan: Broadcasting, Tahun Lulus: 2023.
    2. Nim: A11.2010.01234, Nama: Budi, Jurusan: Sistem Informasi, Tahun Lulus: 2013.
    3. Nim: A11.2000.01234, Nama: Ali, Jurusan: DKV, Tahun Lulus: 2003.
    4. Nim: A11.1990.01234, Nama: Siti, Jurusan: Kesehatan, Tahun Lulus: 1993.

    Lakukan terhadap array statis dan dinamis
*/
#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    const int jumlahMahasiswa = 4;
    Mahasiswa mahasiswa[jumlahMahasiswa];

    // Mengisi data mahasiswa
    mahasiswa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    // Mencetak data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa " << i + 1 << ":" << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    return 0;
}
