// 1             1
// 1 2         2 1
// 1 2 3     3 2 1
// 1 2 3 4 4 3 2 1

#include<iostream>
using namespace std;
int main(){
    int space=2*(4-1);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
            
        }
        cout<<endl;
        space -=2;
    }
}