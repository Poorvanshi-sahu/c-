#include<bits/stdc++.h>
using namespace std;

int main(){

    int no = 153;
    int num = no;
    int rem;
    int newNum=0;

    while(num>0){
        rem = num%10;
        newNum = newNum + pow(rem, 3);
        num = num/10;
        cout<<newNum<<endl;
    }
    
    if(no == newNum){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }

    cout<<"\n\n\n";
    return 0;
}