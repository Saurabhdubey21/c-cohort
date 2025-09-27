#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>s;
    s.push("this");//this is the first element
    s.push("is");//this is second
    s.push("a");//this is 3rd
    s.push("boy");//4th
    cout<<"first element of queue: "<<s.front()<<endl;
    cout<<"Last element of queue: "<<s.back()<<endl;
    s.pop();
    cout<<"first element of queue after pop: "<<s.front()<<endl;
    cout<<"size of queue: "<<s.size()<<endl;
}
//output
// first element of queue: this
// Last element of queue: boy
// first element of queue after pop: is
// size of queue: 3