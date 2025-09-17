#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"sum:"<<a+b;
}
int main(){
    int a;
    cout<<"Enter 1st number is: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd number is: ";
    cin>>b;
    sum(a,b);
}