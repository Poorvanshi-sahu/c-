#include<bits/stdc++.h>
using namespace std;

int fibonacci(int i){
    if(i==0){
        return 0;
    }else if(i==1){
        return 1;
    }
      
    int s = fibonacci(i-1)+fibonacci(i-2);
    cout<< s<<" ";
}

int main(){
    int term = 5;

    cout<<fibonacci(term);

    cout<<endl;
    return 0;
}