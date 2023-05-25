/*
    TUGAS PERTEMUAN 9 ALPRO
    RAHMADINI CAHYA D.
    A11.2022.14464
    A11.4212
    SENIN 22 MEI 2023
*/
#include <iostream>

using namespace std;
//PANGKAT REKURSIF
    int pangkat(int a, int p){
        if(p==0){
            return 1;
        }else{
            return a*pangkat(a,p-1);
        }
    }
int main()
{
    int a,b;
    int hasil = pangkat(6,2);
    cout << "Hasil Pangkat: " << hasil << endl;
    return 0;
}
