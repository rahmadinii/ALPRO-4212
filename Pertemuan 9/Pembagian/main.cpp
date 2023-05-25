/*
    TUGAS PERTEMUAN 9 ALPRO
    RAHMADINI CAHYA D.
    A11.2022.14464
    A11.4212
    SENIN 22 MEI 2023
*/
#include <iostream>

using namespace std;
//PEMBAGIAN REKURSIF
    int pembagian(int a, int b){
        if(b==0){
            cout << "TIDAK TERDEFINISI" << endl;
            return 0;
        }else if(a<b){
            return 0;
        }else{
            return 1+pembagian(a-b,b);
        }
    }
int main()
{
    int a,b;
    int hasil = pembagian(6,2);
    cout << "Hasil Pembagian: " << hasil << endl;
    return 0;
}
