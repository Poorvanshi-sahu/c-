#include<bits/stdc++.h>
// #include<math.h>
// #include<string.h>
using namespace std;

void explainPair(){
    // pair<int, int> p = {1,3};
    // cout<<p.first<<" "<<p.second<<endl;

    // // nested pair
    // pair<int, pair<int, int>> p2 = {1,{2,3}};
    // cout<<p2.first<<" "<<p2.second.first<<endl;

    // // pair type array
    // pair<int, int>arr[] = {{1,2}, {2,3}, {5,6}};
    // cout<<arr[2].first;

    // vector
    
    // vector<int> v;
    // v.push_back(10);
    // v.emplace_back(20);

    // vector<pair<int,int>> v2;
    // v2.push_back({20,90});
    // v2.emplace_back(90,89);
    // cout<<v2[0].second<<endl;
    // cout<<v2[1].first;

    vector<int> v3(1,100);
    v3.push_back(90);
    v3.push_back(490);
    // cout<<v3[0]<<endl;

    // iterator points to the memory where the element is
    // vector<int>::iterator it = v3.begin();
    // vector<int>::iterator it = v3.end();
    // vector<int>::iterator it = v3.rend();
    // vector<int>::iterator it = v3.rbegin();
    // it++;
    // it++;
    // cout<<*(it);
    // cout<<v3.back()<<endl;


    // way to print all element
    for(vector<int>::iterator it = v3.begin(); it!= v3.end(); it++){
        cout<<*(it)<<endl;
    }

    cout<<endl;

    // other way
     for(auto it = v3.begin(); it != v3.end(); it++){
        cout<<*(it)<<endl;
    }
}

int main(){

    explainPair();
    cout<<"\n\n\n";
    return 0;
}


// Algorithms
// Containers - vector, queue, list, map

// vector is container that is dynamic in nature
// functions
// Iterators