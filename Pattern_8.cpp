// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=1;j<=10-2*i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}