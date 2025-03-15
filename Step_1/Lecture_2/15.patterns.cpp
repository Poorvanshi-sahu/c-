#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        for(char j='A'; j<'A'+n-i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}