#include <bits/stdc++.h>
using namespace std;
 
void Frequency(int arr[], int n)
{
   vector<bool> present(n, false);

   for(int i=0 ;i<n ;i++){
        
        if(present[i]==true){
            continue;
        }

        int count = 0;
        for(int j=i; j<n; j++){
            if(arr[i]==arr[j]){
                count+=1;
                present[j] = true;
            }
        }

        cout<<arr[i]<<" "<<count<<endl;
   }
}
 
int main()
{
    int arr[] = {10,5,0,10,15,10,5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    Frequency(arr, n);

    return 0;
}

