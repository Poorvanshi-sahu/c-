#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    int start=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<start<<" ";
            start+=1;
        }
        cout<<"\n";
    }
    
    return 0;
}