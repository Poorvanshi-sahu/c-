// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n1 = 20;
//     int n2 = 15;

//     int lowerLimit = min(n1, n2);
//     int x = 1;

//     int gcd = 1;
    
//     while(x != lowerLimit){
//         if(n1%x==0 && n2%x==0){
//             gcd = x;
//         }
//         x += 1;
//     }
   
//     cout<<"GCD: "<<gcd;
//     cout<<"\n\n\n";
//     return 0;
// }


// ********************************** Better approach ************************************

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n1 = 20;
//     int n2 = 15;

//     int lowerLimit = min(n1, n2);

//     int gcd = 1;
    
//     while(lowerLimit != 1){
//         if(n1%lowerLimit==0 && n2%lowerLimit==0){
//             gcd = lowerLimit;
//         }
//         lowerLimit -= 1;
//     }
   
//     cout<<"GCD: "<<gcd;
//     cout<<"\n\n\n";
//     return 0;
// }

// ********************************** Optimal approach ************************************

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n1 = 9;
    int n2 = 12;
    int gcd = 1;

    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1%n2;
        }else{
            n2 = n2%n1;
        }

        if(n1==0){
            gcd = n2;
            break;
        }else if(n2==0){
            gcd = n1;
            break;
        }

    }
   
    cout<<"GCD: "<<gcd;
    cout<<"\n\n\n";
    return 0;
}