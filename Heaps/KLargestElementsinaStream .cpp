#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void printminheap(priority_queue minheap){
    vector<int> minm;
    for(auto p:minheahp){
        minm.push_back(p);
    } 
    for(int y:minm){
        cout<<y<<" ";
    }
}
int main(){
    vector<int> v={60, 50, 10, -1, 20, 30, -1, 40, -1};
    priority_queue<int,vector<int>,greater<int> > minheap;
    int k=3;
    for(int i=0;i<k;i++){
        minheap.push(arr[i]);
    }

    while(!minheap.empty()){
        int x;
        cin>>x;
        if(x==-1){
            printminheap(minheap);
        }
        else{
            if(minheap.size()<K){
                minheap.push(x);
            }
            else if(minheap.top()<x){
                minheap.pop();
                minheap.push(x);
            }
        }
    }
}