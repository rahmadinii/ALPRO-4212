/*
    TUGAS ALPRO BIG O SORTING (BUBBLE, SELECTION, INSERTION)
    RAHMADINI CAHYA D. (A11.2022.14464)
    A11.4212
    26 JUNI 2023
*/
#include <iostream>
using namespace std;

// Fungsi Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Fungsi Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

// Fungsi Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int arr[] = {0, 6, 0, 6, 0, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Bubble Sort
    bubbleSort(arr, n);
    cout << "Hasil Bubble Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Selection Sort
    selectionSort(arr, n);
    cout << "Hasil Selection Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion Sort
    insertionSort(arr, n);
    cout << "Hasil Insertion Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
