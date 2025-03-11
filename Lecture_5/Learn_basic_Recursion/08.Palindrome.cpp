#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str, int start, int end){
     if(start>=end){
        return true;
     }

     if(str[start] != str[end]){
        return false;
     }

     return palindrome(str, start+1, end-1);
}

int main(){
    string s = "ABNBA";

    if(palindrome(s, 0, s.size()-1)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }

    cout<<endl;
    return 0;
}