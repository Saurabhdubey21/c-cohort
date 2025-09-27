#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(5);
    s.insert(7);
    s.insert(7);
    s.insert(8);
    s.insert(8);
    // in set only one element will be print without printing same elment twice
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    set<int>::iterator it=s.begin();
    it++;
    //here 2nd element will be erase from it
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    set<int>::iterator itr = s.find(5);
    for(auto it=itr;it !=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

//output
// 5
// 6
// 7
// 8
// 5
// 7
// 8
// 5 is present or not: 1