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



}

void explainVector(){
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
    // for(vector<int>::iterator it = v3.begin(); it!= v3.end(); it++){
    //     cout<<*(it)<<endl;
    // }

    // cout<<endl;

    // other way
    //  for(auto it = v3.begin(); it != v3.end(); it++){
    //     cout<<*(it)<<endl;
    // }

    

    // ************ vector iteration
    for(auto it : v3){
        cout<<it<<" ";
    }

    // ************ vector erase
    v3.erase(v3.begin()+1);

    v3.erase(v3.begin()+1);

    cout<<endl<<"After erase"<<endl;

    for(auto it : v3){
        cout<<it<<" ";
    }

    // ************ vector insertion
    v3.insert(v3.begin(), 101);

    v3.insert(v3.begin()+1,3,101);

    vector<int> v4 = {9,8};

    v3.insert(v3.begin(), v4.begin(), v4.end());

    cout<<endl<<"After insertion"<<endl;
    
    for(auto it : v3){
        cout<<it<<" ";
    }

    cout<<endl<<"size: "<<v3.size();

    cout<<endl<<"pop back: v3.pop_back()";

    cout<<endl<<"swap v1.swap(v3)";

    v3.clear();

    for(auto it : v3){
        cout<<it<<"elem ";
    }

    cout<<endl<<"empty"<<v3.empty();
}

void explainList(){
    list<int> ls;

    ls.push_back(20);
    ls.push_back(90);
    ls.push_front(100);

    ls.emplace_back();

    for(auto l: ls){
        cout<<l<<endl;
    }
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(80);

    dq.pop_back();
    dq.back();
    dq.front();
}

void explainStack(){
    stack<int> s;
    s.push(90);
    s.push(100);
    s.push(789);

    cout<<s.top();
    cout<<s.size();
    cout<<s.empty();

    stack<int> sta1, sta2;
    sta1.swap(sta2);
}




// fifo
void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(90);
    q.emplace(9);

    q.back() += 5;

    cout<<q.front();
    q.pop();
    cout<<q.front();
}

void explainPQ(){
    priority_queue<int>pq;

    pq.push(90);
    pq.push(78);
    pq.push(723);
    pq.emplace(78);

    cout<<pq.top()<<endl;

    pq.pop();

    cout<<pq.top()<<endl;

    // for min heap or minimum priority queue
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(78);
    pq.push(58);
    pq.push(78);
    pq.push(28);

    cout<<pq.top();

    // push in log(N);
    // top O(1);
    // pop log(N);
}

void explainSet(){
    // everything in sorted order and unique
    // everything takes log(N)

    set<int> s;
    s.insert(9);
    s.insert(8);
    s.insert(3);
    s.insert(9);

    // iterator points to the address
    auto it = st.find(3);

    auto it = st.find(6);

    s.erase(8);

    s.count();

    s.erase(it);


    auto it1 = s.find(8);
    auto it2 = s.find(9);
    s.erase(it1, it2);

    auto it = s.lower_bound(2);
    auto it = s.lower_bound(9);
}

void explainMultiSet(){
    // only obeys sorted 

    multiset<int> ms;

    ms.insert(89);
    ms.insert(67);
    ms.insert(89);

    ms.erase(89); //erase every 89

    int cnt = ms.count();

    ms.erase(ms.find(1));

    ms.erase(ms.find(1),ms.find(1)+2);
}

void explainUs(){
    // unordered set only have unique elem

    unordered_set<int> st;

    // every fun similar to set but lower upper does not work

    // worst case O(N)
}

void explainMap(){
    // { key,value } stores unique keys in sorted order
    // map<int, int> mpp;

    // mpp[1]=2;

    // mpp.emplace({3,1})

    // mpp.insert({2,4});

    // map<pair<int, int>, int> mpp3;    

    // mpp2({2,3})  = 10;
    
    // map<int, pair<int, int>> mpp2;

    // mpp2[4] = {5,6};

    // auto it = mpp.find(1);
    
    // cout<<*it<<endl;
    
}


// multimap

// extra
void explainExtra(){
    
    // for array
//     sort(a, a+n);

//    // specific portion in array
//    sort(a+2, a+4);

//    // sort in descending order
//    sort(a, a+n, greater<int>);    

//     // for vector
//     sort(v.begin(), v.endl());

    // set bits no
    // int num = __builtin_popcount();

    // permutation
    string s = "123";
    next_permutation(s.begin(), s.end());

    *max_element(a, a+n);
}

// unorderedmap
int main(){

    // explainPair();
    // explainVector();
    // explainList();
    // explainPQ();
    // explainExtra();


    cout<<"\n\n\n";
    return 0;
}



// Algorithms
// Containers - vector, queue, list, map, stack

// vector is container that is dynamic in nature
// functions
// Iterators