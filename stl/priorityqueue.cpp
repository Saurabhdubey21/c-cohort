//in priority queue we make a queue who's first element is always a greatest number
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>maxi;
    priority_queue<int,vector<int>,greater<int>>mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(7);
    maxi.push(5);
    cout<<"size: "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(7);
    mini.push(5);
    cout<<"size: "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;
    //here each element will be pop out one by one
    cout<<"empty or not: "<<mini.empty()<<endl;
}
// output
// size: 5
// 7 5 3 2 1
// size: 5
// 1 2 3 5 7
//empty or not:1