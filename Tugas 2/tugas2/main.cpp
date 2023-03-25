/*
    TUGAS 2 MATKUL ALGORITMA PEMROGRAMAN
    RAHMADINI CAHYA D. (A11.2022.14464)
    A11.4212
*/
#include <iostream>

using namespace std;

//UNTUK MEMNENTUKAN BILANGAN MAKSIMUM
int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

//UNTUK MENENTUKAN BILANGAN MINIMUM
int min(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

//UNTUK MENETUKAN BILANGAN MAKSIMUM DARI ARRAY
int MaxArray(int arr[], int max){
    int bilMax = arr[0];
    for(int i =1; i<max; i++){
        if(arr[i] > bilMax){
            bilMax = arr[i];
        }
    }
    return bilMax;
}

//UNTUK MENENTUKAN BILANGAN MINIMUM DARI ARRAY
int MinArray(int arr2[], int min){
    int bilMin = arr2[0];
    for(int i =1; i<min; i++){
        if(arr2[i] < bilMin){
            bilMin = arr2[i];
        }
    }
    return bilMin;
}

//UNTUK MENENTUKAN BILANGAN GENAP ATAU BUKAN
bool isEven(int x) {
    return x % 2 == 0;
}

//UNTUK MENENTUKAN BILANGAN GANJIL ATAU BUKAN
bool isOdd(int y) {
    return y % 2 == 1;
}

//UNTUK MENGECEK APAKAH SUATU BILANGAN ADALAH FAKTOR BILANGAN LAIN
bool isFactor(int a, int b){
    if(b%a == 0){
        return true;
    }
    return false;
}

//UNTUK MENCARI INDEKS NILAI DI DALAM ARRAY
int search(int arr[], int n, int n2) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == n2) {
            return i;
        }
    }

    return -1;
}

//UNTUK MENCARI NILAI DI DALAM ARRAY
bool isFound(int arr[], int x1, int x2) {
    for(int i = 0; i < x1; i++) {
        if(arr[i] == x2) {
            return true;
        }
    }

    return false;
}

//UNRUK MENCARI ADA BERAPA BILANGAN GENAP DALAM SEBUAH ARRAY
int sumEven(int arr4[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr4[i] % 2 == 0) {
            sum += arr4[i];
        }
    }
    return sum;
}

//UNRUK MENCARI ADA BERAPA BILANGAN GANJIL DALAM SEBUAH ARRAY
int sumOdd(int arr5[], int size2) {
    int sum2 = 0;
    for (int i = 0; i < size2; i++) {
        if (arr5[i] % 2 == 1) {
            sum2 += arr5[i];
        }
    }
    return sum2;
}

int main()
{
    //UNTUK MEMNENTUKAN BILANGAN MAKSIMUM
    int hasil = max(1,2);
    cout << "Bilangan maksimumnya adalah: " << hasil << endl;
    cout << endl;

    //UNTUK MEMNENTUKAN BILANGAN MINIMUM
    int hasil2 = min(1,2);
    cout << "Bilangan minimumnya adalah: " << hasil2 << endl;
    cout << endl;

    //UNTUK MENETUKAN BILANGAN MAKSIMUM DARI ARRAY
    int arr[]={1,2,3,4,5};
    int max = sizeof(arr)/sizeof(arr[0]);
    int bilMax = MaxArray(arr,max);
    cout << "Bilangan Maksimum dari array tersebut adalah: " << bilMax << endl;
    cout << endl;

    //UNTUK MENETUKAN BILANGAN MINIMUM DARI ARRAY
    int arr2[]={1,2,3,4,5};
    int min = sizeof(arr2)/sizeof(arr2[0]);
    int bilMin = MinArray(arr2,min);
    cout << "Bilangan Minimum dari array tersebut adalah: " << bilMin << endl;
    cout << endl;

    //UNTUK MENENTUKAN BILANGAN GENAP ATAU BUKAN
    int x = 2;
    if (isEven(x)) {
        cout << "Bilangan " << x << " adalah bilangan genap" << endl;
    } else {
        cout << "Bilangan " << x << " bukan bilangan genap" << endl;
    }
    cout << endl;

    //UNTUK MENENTUKAN BILANGAN GANJIL ATAU BUKAN
    int y = 1;
    if (isOdd(y)) {
    cout << "Bilangan " << y << " adalah bilangan ganjil" << endl;
    } else {
    cout << "Bilangan " << y << " bukan bilangan ganjil" << endl;
    }
    cout << endl;

    //UNTUK MENGECEK APAKAH SUATU BILANGAN ADALAH FAKTOR BILANGAN LAIN
    int a, b;
    cout << "======MENGECEK APAKAH SUATU BILANGAN ADALAH FAKTOR BILANGAN LAIN======" << endl;
    cout << "Masukkan bilangan a: ";
    cin >> a;

    cout << "Masukkan bilangan b: ";
    cin >> b;

    if(isFactor(a, b)) {
        cout << a << " adalah faktor dari " << b << endl;
    } else {
        cout << a << " bukan faktor dari " << b << endl;
    }

    //UNTUK MENCARI INDEKS NILAI DI DALAM ARRAY
    int n, n2;
    cout << endl;
    cout << "===========MENCARI INDEKS NILAI DI DALAM ARRAY=============" << endl;
    cout << "Masukkan panjang array: ";
    cin >> n;

    int arr3[n];
    cout << "Masukkan elemen array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> n2;

    int index = search(arr, n, n2);
    if(index == -1) {
        cout << "Nilai " << n2 << " tidak ditemukan dalam array" << endl;
    } else {
        cout << "Nilai " << n2 << " ditemukan pada indeks " << index << " dalam array" << endl;
    }

    //UNTUK MENCARI NILAI DI DALAM ARRAY
    int x1, x2;
    cout << endl;
    cout << "===========MENCARI NILAI DI DALAM ARRAY=============" << endl;
    cout << "Masukkan panjang array: ";
    cin >> x1;

    int arr6[x1];
    cout << "Masukkan elemen array: ";
    for(int i = 0; i < x1; i++) {
        cin >> arr[i];
    }

    cout << "Masukkan nilai yang ingin dicari: ";
    cin >> x2;

    if(isFound(arr, x1, x2)) {
        cout << "Nilai " << x2 << " ditemukan dalam array" << endl;
    } else {
        cout << "Nilai " << x2 << " tidak ditemukan dalam array" << endl;
    }

    //UNRUK MENJUMLAHKAN BILANGAN GENAP DI DALAM ARAY
    int arr4[] = {1, 2, 3, 4};
    int size = sizeof(arr4) / sizeof(arr4[0]);
    int sum = sumEven(arr4, size);
    cout << endl;
    cout << "Jumlah bilangan genap dalam array adalah: " << sum << endl;

    //UNRUK MENJUMLAHKAN BILANGAN GANJIL DI DALAM ARRAY
    int arr5[] = {1, 2, 3, 4};
    int size2 = sizeof(arr5) / sizeof(arr5[0]);
    int sum2 = sumOdd(arr5, size2);
    cout << endl;
    cout << "Jumlah bilangan ganjil dalam array adalah: " << sum2 << endl;

    return 0;
}
