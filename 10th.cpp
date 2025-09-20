//making a combinations algo using functions c++
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
    cout<<"enter the number:";
    cin>>n;
    int r;
    cout<<"enter second number:";
    cin>>r;
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    cout<<a/(b*c);
}
