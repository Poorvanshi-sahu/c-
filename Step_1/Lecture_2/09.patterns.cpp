#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        // for space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }

        // for star
        for(int j=0;j<i+i+1;j++){
            cout<<"*";
        }

        cout<<"\n";
    }

    for(int i=0;i<n;i++){

        // for space
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        // for star
        for(int j=(n-i)*2-1;j>0;j--){
            cout<<"*";
        }

        
        cout<<"\n";
    }
    return 0;
}