/*
    TUGAS PERTEMUAN 9 ALPRO
    RAHMADINI CAHYA D.
    A11.2022.14464
    A11.4212
    SENIN 22 MEI 2023
*/
#include <iostream>

using namespace std;
//PENJUMLAHAN REKURSIF
    int penjumlahan(int a, int b){
        if(b==0){
            return a;
        }else{
            return penjumlahan(a+1,b-1);
        }
    }
int main()
{
    int a,b;
    int hasil = penjumlahan(6,2);
    cout << "Hasil Penjumlahan: " << hasil << endl;
    return 0;
}
