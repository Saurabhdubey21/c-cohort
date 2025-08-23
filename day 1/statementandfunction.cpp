// statements
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n: ";
    cin >>n;
    if (n>0){
        cout<<"number is postive";
    }
    else {
        if (n<0){
        cout<<"number is negative";
        }
        else {
            cout<<"number is zero";
        }
    }
}