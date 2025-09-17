// multiple function
#include<iostream>
using namespace std;
void usa(){
    cout<<"you are  in usa"<<endl;;
}
void india(){
    cout<<"you are from india"<<endl;
    usa();
}
int main(){
    cout<<"this is main function"<<endl;
    usa();
    india();
}