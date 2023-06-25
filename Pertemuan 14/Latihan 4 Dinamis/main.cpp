/*
    RAHMADINI CAHYA D. (A11.2022.14464)(A11.4212)
    21 JUNI 2023
    Latihan 4 Dinamis
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
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    Mahasiswa* mahasiswa = new Mahasiswa[n];

    // Mengisi data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "Jurusan: ";
        cin >> mahasiswa[i].jurusan;
        cout << "Tahun Lulus: ";
        cin >> mahasiswa[i].tahunLulus;
        cout << endl;
    }

    // Mencetak data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Jurusan: " << mahasiswa[i].jurusan << endl;
        cout << "Tahun Lulus: " << mahasiswa[i].tahunLulus << endl;
        cout << endl;
    }

    delete[] mahasiswa;

    return 0;
}
