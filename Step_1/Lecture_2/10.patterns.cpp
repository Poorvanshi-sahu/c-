#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=0;i<n;i++){
        
        for(int j=n-i-1;j>0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
    
    return 0;
}