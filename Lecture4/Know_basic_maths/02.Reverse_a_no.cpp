#include<bits/stdc++.h>
using namespace std;

int main(){

    int no = -12345000;
    int rev;
    int rem;

    while(no > 0){
        rem = no%10;
        rev = 10*rev+rem;
        no = no / 10;
    }

    cout<<"Reversed number : "<<rev;
    cout<<"\n\n\n";
    return 0;
}