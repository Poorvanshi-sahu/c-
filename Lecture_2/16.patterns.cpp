#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    char ch = 'A';
    for(int i=0;i<n;i++){ 
        for(char j=0; j<i+1; j++){
            cout<<ch<<" ";
        }
        cout<<"\n";
        ch = ch + 1;
    }
    
    return 0;
}