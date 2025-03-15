#include <bits/stdc++.h>
using namespace std;
 
void maxMinFrequency(int arr[], int n)
{
   vector<bool> present(n, false);
   int maxFreq=0, minFreq=n;
   int maxElem, minElem;

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

        if(count>maxFreq){
            maxFreq = count;
            maxElem = arr[i];
        }

        if(count<minFreq){
            minFreq = count;
            minElem = arr[i];
        }
   }
  cout<<"MaxElem"<<" "<<maxElem<<endl;
  cout<<"MinElem"<<" "<<minElem<<endl;
}


void maxMinOptimize(int arr[], int n)
{
   map<int, int> m;
   int maxFreq=0, minFreq=n;
   int maxElem, minElem;

   for(int i=0;i<n;i++){
      m[arr[i]]++;
   }

   for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;
      if(it.second>maxFreq){
          maxFreq = it.second;
          maxElem = it.first;
      }

      if(it.second<minFreq) {
         minFreq = it.second;
         minElem = it.first;
      }
   }

   cout<<"final";
   cout<<"MaxElem"<<" "<<maxElem<<endl;
   cout<<"MinElem"<<" "<<minElem<<endl;
}
 
int main()
{
    int arr[] = {10,5,9,0,10,15,10,5, 8, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    // maxMinFrequency(arr, n);
    maxMinOptimize(arr, n);

    return 0;
}

