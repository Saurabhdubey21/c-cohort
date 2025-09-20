//making permutation formula using functions 
#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f *=i;
    }
    return f;
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int r;
    cout<<"Enter another number:";
    cin>>r;
    int a = fact(n);
    int b =fact(r);
    int c= fact(n-r);
    cout<<a/c; 
}