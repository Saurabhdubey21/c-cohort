#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int a=7;
    int b=6;
    swap(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<endl;
    string saurabh="Gaurav";
    reverse(saurabh.begin(),saurabh.end());
    cout<<"string: "<<saurabh<<endl;
    vector<int>v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    //since 6 is a present thats why output is 1
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" "<<endl;
    }
}
//output
// a: 6
// b: 
// string: varuaG
// Finding 6: 1
// Lower bound: 3
// upper bound: 4
// after rotate
// 4
// 5
// 6
// 2