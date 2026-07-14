#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> A={1,4,2,5,2,9};
    for(int i=0;i<A.size();i++){
        stack<int> s;
        while(!s.empty() and A[i]>=s.top()){
            s.pop();
        }
    }
}