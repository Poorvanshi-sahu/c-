#include<bits/stdc++.h>
using namespace std;

int hash[10000000]; //only globally accepted

int main(){

    // string s = "zabczuhizopop";
    // int hash[25] = {0};

    // for(int i=0;i<s.size();i++){
    //     hash[s[i]-'a'] +=1;
    // }

    // for(int i=0;i<26;i++){
    //     cout<<char(97+i)<<": "<<hash[i]<<endl;
    // }

    string s = "zabczuhizoA'op";
    int hash[256] = {0};

    for(int i=0;i<s.size();i++){
        hash[s[i]] +=1;
    }

    cout<<"Enter queries no: ";
    int q;
    cin>>q;
    char c;

    while(q--){
        cout<<"Enter char: ";        
        cin>>c;
        cout<<"No: "<<hash[c]<<endl;
    }

    cout<<"\n\n\n";
    return 0;
}