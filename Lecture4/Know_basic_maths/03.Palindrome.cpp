#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 12321;
    int rev = 0;
    int rem;
    int no = num;

    while(no > 0){
        rem = no%10;
        rev = (10*rev)+rem;
        no = no / 10;
    }

    if(num==rev){
        cout<<"Palindrome";
    }else{
        cout<<"Palindrome not";
    }
   
    cout<<"\n\n\n";
    return 0;
}