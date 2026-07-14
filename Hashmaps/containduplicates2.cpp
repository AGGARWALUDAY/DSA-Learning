#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,2,2,3};
    int n=v.size();
    int slow=v[n-1];
    int fast=v[n-1];
    while(true){
        slow=v[slow];
        fast=v[v[fast]];

        if(slow==fast){
            break;
        }
    }
    slow=v[n-1];
    while(slow!=fast){
        slow=v[slow];
        fast=v[fast];
    }
    cout<<slow;
}