#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){

        // space loop
        for(int j=0;j<i;j++){
            cout<<" ";
        }

        int k=(n-i)*2-1;
        
        // triangle loop
        for(int j=k;j>0;j--){
            cout<<"*";
        }

        cout<<"\n";
    }
    return 0;
}