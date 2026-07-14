#include<iostream>
#include<vector>
#include<stack>
#include<stack>
bool v(vector<int> v){
    stack<int> s;
    for(int i=0;i<v.size();i++){
        while(!s.empty() and s.top()<=v[i]){
            s.push(v[i]);
        }
        if(s.empty()){
            s.push(v[i]);
        }
        
    }
}
using namespace std;
int main(){
    vector<int> v={3,4,6,2,1,5};
    check(v);
}