#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void insertionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1], arr[j]);
            j--;
        }
    }
}

int main(){

    int arr[] = {2,9,0,4,6,-1,11,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    // selection_sort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n\n";
    return 0;
}