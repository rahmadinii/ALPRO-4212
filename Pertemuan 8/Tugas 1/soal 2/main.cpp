/*
    RAHMADINI CAHYA D.
    A11.2022.14464
    17 MEI 2022
    SOAL NO 2
*/
#include <iostream>

using namespace std;
//selction sort
void selectionSort(int arr[], int size){
    for(int i=0; i < size-1; i++ ){
        int maxIndex = i;
        for(int j = i+1; j<size; j++){
            if(arr[j] > arr[maxIndex]){
                maxIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[maxIndex];
        arr[maxIndex] = temp;
    }
}
//insertion sort
void insertionSort(int arr2[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr2[i];
        int j = i - 1;

        while (j >= 0 && arr2[j] < key) {
            arr2[j + 1] = arr2[j];
            j = j - 1;
        }

        arr2[j + 1] = key;
    }
}

void printArray(int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "selection sort" << endl;
    cout << "===========================================" << endl;
    int arr[]={1,2,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "array sebelum diurutkan: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr,size);
    cout << "array yang sudah diurutkan: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    //insertion sort
    cout << " " << endl;
    cout << endl;
    cout << "insertion sort" << endl;
    cout << "===========================================" << endl;

    int arr2[]={1,2,1,2,3,4,5};
    int n = sizeof(arr2) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan: ";
    printArray(arr2, n);

    insertionSort(arr2, n);

    cout << "Array yang sudah diurutkan: ";
    printArray(arr2, n);
    cout << endl;
    return 0;
}
