#include<bits/stdc++.h>
using namespace std;

bool primeNo(int num){
    int x=2;
    while(x<num){
        if(num%x==0){
            return false;
        }
        x+=1;
    }
    return true;
}

bool primeNoOptimize(int num){
    int x = 2;
    while(x<sqrt(num)){
        if(num%x==0){
            return false;
        }
        x+=1;
    }
    return true;
}

int main(){

    int no = 113;
    // bool ans = primeNo(no);
    bool ans = primeNoOptimize(no);
    cout<<ans<<endl;
    if(ans){
        cout<<"Prime no";
    }else{
        cout<<"Not prime";
    }

    cout<<"\n\n\n";
    return 0;
}