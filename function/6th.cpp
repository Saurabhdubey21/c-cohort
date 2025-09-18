//print
//    *
//   **
//  ***
// ****
#include<iostream>
using namespace std;
void print(int n){
    for(int i=1;i<=n;i++){
        //for print space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //for print star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
    cout<<endl;
    }
}
int main(){
    int t;
    for(int i=0;i<=t;i++){
    int n;
    cin>>n;
        print(n);
    }
    cout<<endl;
}
