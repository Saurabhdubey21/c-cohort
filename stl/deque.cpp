#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    //adding element from back
    d.push_back(4);
    d.push_front(5);
    cout<<endl;
    cout<<"first element: "<<d.at(1);
    cout<<"first: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    cout<<"empty or not: "<<d.empty()<<endl;
    cout<<"before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}