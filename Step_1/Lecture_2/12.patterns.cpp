#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        // left side number
        for(int j=0;j<i+1;j++){
            cout<<j+1<<" ";
        }

        // space
        for(int j=(n-i)*2-2;j>0;j--){
            cout<<"  ";
        }

        // right side number
        for(int j=i+1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}