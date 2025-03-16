// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int findPart(int arr[], int low, int high){
    int i=low;
    int j=high;
    int pivot = arr[low];
    
    while(i<j){
        while(i<=high-1 && arr[i] <= pivot){
            i++;
        }
        
        while(j>=low+1 && arr[j] >= pivot){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    // base condition
    if(low >= high){
        return;
    }
   
    int partition = findPart(arr, low, high);
    quickSort(arr, low, partition-1);
    quickSort(arr, partition+1, high);
}

int main() {
    int arr[] = {5,3,-1,2,6,-1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    quickSort(arr ,0 ,n);
    
    cout<<"After Insertion sort"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}