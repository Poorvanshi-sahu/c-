#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"\n";

    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}