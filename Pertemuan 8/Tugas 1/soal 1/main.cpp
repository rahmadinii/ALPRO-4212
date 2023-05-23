/*
    RAHMADINI CAHYA D.
    A11.2022.14464
    17 MEI 2022
    SOAL NO 1
*/

#include <iostream>

using namespace std;
void genapterkecil(int arr[], int size);
int ganjil(int x);

int main()
{
   int arr[]={6,7,8,5,7,8,10,11};
   int size = sizeof(arr)/sizeof(arr[0]);
   genapterkecil(arr,size);
   return 0;
}

int ganjil(int x){
    return(x%2==1);
}

void genapterkecil(int arr[], int size){
    int genapterkecil=9999999999;
    int index=-1;

    for(int i=0; i<size; i++){
        if(!ganjil(arr[i]) && arr[i]<genapterkecil){
            genapterkecil=arr[i];
            index=i;
        }
    }
    if(genapterkecil==9999999999){
        cout << "tidak ada bilangan genap" << endl;
    }else{
        cout << "bilangan genap terkecil adalah: " << genapterkecil << " terdapat pada index ke-" << index << endl;
    }
}
