#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"\n";

    for(int i=0;i<row;i++){

        // space loop
        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }

        // triangle loop
        for(int j=0;j<i+i+1;j++){
            cout<<"*";
        }

        cout<<"\n";
    }
    return 0;
}