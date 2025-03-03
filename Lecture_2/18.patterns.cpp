#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=1;i<=n;i++){
        for(char j='A'+n-1;j>='A'+n-i;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}