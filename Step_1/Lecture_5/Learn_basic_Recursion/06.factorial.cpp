#include<bits/stdc++.h>
using namespace std;

int recur(int n){
   
    if(n==1){
        return 1;
    }

    return n*recur(n-1);
}

int main(){

    int n=5;

    cout<<recur(n);

    cout<<"\n\n\n";
    return 0;
}