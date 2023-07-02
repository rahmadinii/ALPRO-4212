/*
    TUGAS ALPRO BIG O SEARCH (BINARY SEARCH)
    RAHMADINI CAHYA D. (A11.2022.14464)
    A11.4212
    26 JUNI 2023
*/
#include <iostream>

using namespace std;
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid;  // Mengembalikan indeks tempat elemen ditemukan
        }

        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;  // Mengembalikan -1 jika elemen tidak ditemukan
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 70;
    int size = sizeof(arr) / sizeof(arr[0]);

    int hasil = binarySearch(arr, 0, size - 1, target);

    if (hasil == -1) {
        cout << "Elemen tidak ditemukan" << endl;
    } else {
        cout << "Elemen ditemukan di indeks: " << hasil << endl;
    }
    return 0;
}
