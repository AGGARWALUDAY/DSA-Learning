#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> inp = {{1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };
    int m=inp.size();
    int n=inp[0].size();

    priority_queue<int,vector<int>,greater<int>> minheap;

    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            minheap.push(inp[i][k]);
        }
    }
    
    vector<int> ans;
    while(!minheap.empty()){
        int temp=minheap.top();
        minheap.pop();
        ans.push_back(temp);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i] <<" ";
    }

}