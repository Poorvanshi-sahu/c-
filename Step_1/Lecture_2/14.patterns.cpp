#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter row: ";
    cin>>n;
    cout<<"\n";

    for(int i=0;i<n;i++){
        char ch = 'A';
        for(int j=0;j<i+1;j++){
            cout<<ch;
            ch++;
        }
        cout<<"\n";
    }
    
    return 0;
}