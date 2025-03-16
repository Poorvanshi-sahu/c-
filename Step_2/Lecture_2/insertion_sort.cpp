// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void insertiveSort(int arr[], int n, int i){
    // base condition
    if(i>=n){
        return;
    }
    
    int j = i+1;
    while(j>=1 && arr[j-1]>arr[j]){
        swap(arr[j-1], arr[j]);
        j--;
    }
    
    insertiveSort(arr, n, i+1);
}

int main() {
    int arr[] = {5,3,-1,2,6,-1,2};
    // int arr[] = {1,2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    insertiveSort(arr, n, 0);
    
    cout<<"After Insertion sort"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}