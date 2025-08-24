// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // first triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        // 2nd triangle
        int star=j-i+1;
        while(star){
            cout<<"*";
        }
        cout<<endl;
        i=i+1;
    }
}