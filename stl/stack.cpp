#include<iostream> 
#include<stack>
using namespace std;
int main(){
    stack<string>s;
    s.push("saurabh");
    s.push("kumar");
    s.push("dubey");
    cout<<"top element: "<<s.top()<<endl;
    s.pop();
    cout<<"size of stack: "<<s.size()<<endl;
    cout<<"empty or not: "<<s.empty()<<endl;
}