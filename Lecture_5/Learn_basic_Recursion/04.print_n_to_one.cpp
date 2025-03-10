#include<bits/stdc++.h>
using namespace std;

void recur(int n){
   
    if(n==0){
        return;
    }

    cout<<n<<" ";
    recur(n-1);
}

int main(){

    int n=10;

    recur(n);

    cout<<"\n\n\n";
    return 0;
}