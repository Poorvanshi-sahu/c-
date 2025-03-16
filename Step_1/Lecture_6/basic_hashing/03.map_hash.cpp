#include<bits/stdc++.h>
using namespace std;

int hash[10000000]; //only globally accepted

int main(){

    int n;
    cin>>n;
    //prefernce is unordered_map
    map<int, int> m;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        m[arr[i]] += 1;
    }

    cout<<"Enter limit";
    int limit;
    cin>>limit;
    int num;

    while(limit--){
        cout<<"Enter no";
        cin>>num;
        cout<<"No: "<<m[num]<<" "<<endl;
    }

    for(auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    cout<<"\n\n\n";
    return 0;
}

