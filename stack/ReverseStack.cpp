#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
void reverseStack(stack<int>& s){

    int x=s.top();
    s.pop();
    reverseStack(s);
    s.
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    reverseStack(s);

}