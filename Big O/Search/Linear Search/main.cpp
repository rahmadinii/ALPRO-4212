/*
    TUGAS ALPRO BIG O SEARCH (LINEAR SEARCH)
    RAHMADINI CAHYA D. (A11.2022.14464)
    A11.4212
    26 JUNI 2023
*/
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;  // Mengembalikan indeks pertama tempat elemen ditemukan
        }
    }
    return -1;  // Mengembalikan -1 jika elemen tidak ditemukan
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    int hasil = linearSearch(arr, size, target);

    if (hasil == -1) {
        cout << "Elemen tidak ditemukan" << endl;
    } else {
        cout << "Elemen ditemukan di indeks: " << hasil << endl;
    }

    return 0;
}
