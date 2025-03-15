#include<bits/stdc++.h>
using namespace std;

int hash[10000000]; //only globally accepted

int main(){

    int n;
    int hash[13]={0};
    int limit;
    int num;

    cin>>n;
    
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]] += 1;
    }

    while(limit--){
        cin>>num;
        cout<<"No: "<<hash[num]<<" ";
    }

    cout<<" yes";

    cout<<"\n\n\n";
    return 0;
}