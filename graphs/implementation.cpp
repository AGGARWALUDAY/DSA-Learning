#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>>& adj, vector<bool>& vis, int s){
    //Base Case

    //Recursive Case
    
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> adj(n);

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u,v;
        adj[u].push_back(v);
        ad[v].push_back(u);
    }
    int s=0; // src node
    vector<bool> vis(n,bool); // check if the node is visited or not 
    dfs(adj,vis,s);
}