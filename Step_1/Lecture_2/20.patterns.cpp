#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter row: ";
    cin >> n;
    cout << "\n";

    for(int i=1;i<=n;i++){
        // left
        for(int j=0;j<i;j++){
            cout<<"*";
        }

        // space
        for(int j=(n-i+1)*2-2;j>0;j--){
            cout<<" ";
        }

        // right
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i=1;i<=n-1;i++){
        // left
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }

        // space
        for(int j=i*2;j>0;j--){
            cout<<" ";
        }

        // right
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}