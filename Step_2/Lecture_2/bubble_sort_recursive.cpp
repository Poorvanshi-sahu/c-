// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    // base condition
    if(n==1){
        return;
    }
    
    for(int i=0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    
    bubbleSort(arr, n-1);
}

int main() {
    int arr[] = {5,3,-1,2,6,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    bubbleSort(arr, n);
    
    cout<<"After bubblesort"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}