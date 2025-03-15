#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left+=1;
        }else{
            temp.push_back(arr[right]);
            right+=1;
        }
    } 
    
    while(left<=mid){
        temp.push_back(arr[left]);
        left+=1;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right+=1;
    }

   for(int i=low ; i<=high; i++){
        arr[i] = temp[i-low];
   }   
}

void mergeSort(vector<int> &arr,int start, int end){
    if(start >= end){
        return;
    }

    int mid = (start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, start, mid, end);
}

int main(){

    vector<int> arr= {2,9,0,-1, 4,11,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr,0 ,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n\n";
    return 0;
}

//        0 1 2 3  4  5
// arr = [2,9,0,4,11,10]
//    [2,9,0]    [4,11,10]
//  [2,9]  [0]  [4,11]  [10]
// [2] [9]     [4] [11]    [10]