// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    // base condition
    if(n==1){
        return;
    }
    
    bool swapped = false;
    for(int i=0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    
    if(swapped == false){
        return;    
    }
    
    bubbleSort(arr, n-1);
}

int main() {
    // int arr[] = {5,3,-1,2,6,-1,2};
    int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    cout<<"After bubblesort"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}