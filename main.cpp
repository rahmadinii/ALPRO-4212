/*
    TUGAS 1 MATKUL ALGORITMA PEMROGRAMAN
    RAHMADINI CAHYA D. (A11.2022.14464)
    A11.4212
*/
#include <iostream>

using namespace std;

//FUNGSI PENJUMLAHAN DUA BILANGAN
int tambah(int a, int b){
return a + b;
}

//FUNGSI PENGURANGAN DUA BILANGAN
int kurang(int a, int b){
return a - b;
}

//FUNGSI UNTUK MEGHITUNG JUMLAH NILAI TOTAL DARI SEBUAH ARRAY
int jumlahArray(int arr[], int n) {
   int sum = 0;
   for (int i = 0; i < n; i++) {
      sum += arr[i];
   }
   return sum;
}

//FUNGSI MENGHITUNG RATA-RATA DARI ARRAY
float rata(float a, float b){
return a / b;
}

int main()
{
    //FUNGSI PENJUMLAHAN DUA BILANGAN
    int hasil1 = tambah(4,6);
    cout << "hasil penjumlahan adalah: "<< hasil1 << endl;

    //FUNGSI PENGURANGAN DUA BILANGAN
    int hasil2 = kurang(6,4);
    cout << "hasil pengurangan adalah: " << hasil2 << endl;

    //FUNGSI UNTUK MEGHITUNG JUMLAH NILAI TOTAL DARI SEBUAH ARRAY
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); //MEMBAGI UKURAN ARRAY DGN UKURAN ELEMEN
    int hasil3 = jumlahArray(arr, n);
    cout << "Hasil penjumlahan array adalah : " << hasil3 << endl;

    //FUNGSI MENGHITUNG RATA-RATA DARI ARRAY
    float hasil4 = rata(hasil3, n);
    cout << "hasil rata-rata penjumlahan array adalah: " << hasil4 << endl;

    return 0;
}
