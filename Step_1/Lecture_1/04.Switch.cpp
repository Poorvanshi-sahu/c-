#include<bits/stdc++.h>
using namespace std;

int main(){

    int day;
    cout<<"Press day no to print day: ";
    cin>>day;

    switch(day){
        case 1:
            cout<<"Sunday";
            break;
        case 2:
            cout<<"Monday";
            break;
        case 3:
            cout<<"Tuesday";
            break;
        case 4:
            cout<<"Wednesday";
            break;
        case 5:
            cout<<"Thursday";
            break;
        case 6:
            cout<<"Friday";
            break;  
        case 7:
            cout<<"Saturday";
            break;       
        default:
            cout<<"Invalid choice";       
    }



    return 0;
    cout<<"\n\n\n\n";
}