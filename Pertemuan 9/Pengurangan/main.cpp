/*
    TUGAS PERTEMUAN 9 ALPRO
    RAHMADINI CAHYA D.
    A11.2022.14464
    A11.4212
    SENIN 22 MEI 2023
*/
#include <iostream>

using namespace std;
//PENGURANGAN REKURSIF
    int pengurangan(int a, int b){
        if(b==0){
            return a;
        }else{
            return pengurangan(a-1,b-1);
        }
    }
int main()
{
    int a,b;
    int hasil = pengurangan(6,2);
    cout << "Hasil Pengurangan: " << hasil << endl;
    return 0;
}
