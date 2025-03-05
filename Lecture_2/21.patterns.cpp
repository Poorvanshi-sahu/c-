#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter row: ";
    cin >> n;
    cout << "\n";

    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
        }else if(i !=0 && i!= n-1){
            cout<<"*";

             // space
        for(int j=0;j<n-2;j++){
            cout<<" ";
        }
            cout<<"*";
        }

       
        cout<<"\n";
    }

    

    return 0;
}