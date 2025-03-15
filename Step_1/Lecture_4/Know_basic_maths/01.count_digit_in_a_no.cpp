#include<bits/stdc++.h>
using namespace std;

int main(){

    int no = 1234590;
    // int rem;
    // int count;

    // while(no > 0){
    //     no = no / 10;
    //     count += 1;
    // }

    // cout<<"No of digits: "<<count;

    // other way
    int c = (int)log10(no)+1;
    
    cout<<"No of digits: "<<c;

    cout<<"\n\n\n";
    return 0;
}