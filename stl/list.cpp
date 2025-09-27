#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int>l;
    l.push_back(5);
    l.push_front(4);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list before erase: "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"after erase: "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list: "<<l.size()<<endl;
    //creating new list with 5 size an deach element is 100
    list<int>n(5,100);
    for(int i:n){
        cout<<i<<" ";
    }
}