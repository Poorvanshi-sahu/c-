#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){

        // left space
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
    
        // text
        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
        }
    
        // text
        for(char j='A'+i-1;j>='A';j--){
            cout<<j<<" ";
        }
        
        cout<<"\n";
        }
    
    return 0;
}