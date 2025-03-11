#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end){
    if(start>end){
        return;
    }

    int temp;
    temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr, start+1, end-1);
}

int main(){
    int arr[] = {1,2,4,5,6,90};
    int n=5;

    reverse(arr, 0, n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
    
}