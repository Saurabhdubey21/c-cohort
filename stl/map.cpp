#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="saurabh";
    m[2]="kumar";
    m[3]="dubey";
    for(auto i:m){
        cout<<i.first<<endl;
    }cout<<endl;
    m.insert({4,"Gaurav"});
    cout<<"before erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(3);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
//output
// 1
// 2
// 3

// before erase: 
// 1 saurabh
// 2 kumar
// 3 dubey
// 4 Gaurav
// after erase
// 1 saurabh
// 2 kumar
// 4 Gaurav