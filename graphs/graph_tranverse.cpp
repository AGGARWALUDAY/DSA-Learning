#include<bits/stdc++.h>
using namespace std;
void dfs(int i, vector<vector<int>>& adj, vector<bool>& vis){
    //Recursive Case
    vis[i]=true;
    cout<<i<<" ";
    for(int start:adj[i]){
        if(!vis[start]){
            dfs(start,adj,vis);
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> vis(n,false);
    int count=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vis[i]=true;
            dfs(i,adj,vis);
            count++;
        }
    }
    cout<<count<<endl;
}