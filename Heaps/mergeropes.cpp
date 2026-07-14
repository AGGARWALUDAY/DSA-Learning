#include<iostream>
#include<queue>
using namespace std;
int give(vector<int>& ropeLengths , int total){
    priority_queue<int,vector<int> , greater<int>>minheap(ropeLengths.begin(), ropeLengths.end());
    while(minheap.size()>1){
        int fs=minheap.top();minheap.pop();
        int ss=minheap.top();minheap.pop();
        total+=(fs+ss);
        minheap.push(fs+ss);
    }
    return total;
}
int main(){
    vector<int> ropeLengths = {4, 3, 2, 6};
    int total=0;
    cout<<give(ropeLengths,total);

}