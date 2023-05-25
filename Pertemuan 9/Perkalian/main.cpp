/*
    TUGAS PERTEMUAN 9 ALPRO
    RAHMADINI CAHYA D.
    A11.2022.14464
    A11.4212
    SENIN 22 MEI 2023
*/
#include <iostream>

using namespace std;
//PERKALIAN REKURSIF
    int perkalian(int a, int b){
        if(a==0 || b==0){
            return 0;
        }else{
            return b+perkalian(a-1,b);
        }
    }
int main()
{
    int a,b;
    int hasil = perkalian(6,2);
    cout << "Hasil Perkalian: " << hasil << endl;
    return 0;
}
