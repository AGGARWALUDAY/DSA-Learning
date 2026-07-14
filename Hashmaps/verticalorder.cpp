#include<iostream>
#include<vector>
#include<map>
using namespace std;
class node{
    public:

    int val;
    node* left;
    node* right;

    node(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
node* buildtree(){
    int x;
    cin>>x;

    if(x==-1){
        node* root=NULL;
        return root;
    }
    node* root=new node(x);
    root->left=buildtree();
    root->right=buildtree();

    return root;

}
void dfs(node* root, map<int,vector<int>>& dismap, int d){
    if(root==NULL){
        return;
    }
    dismap[d].push_back(root->val);
    dfs(root->left,dismap,d-1);
    dfs(root->right,dismap,d+1);
}
int main(){
    
	node* root = NULL;
	root = buildtree();
    map<int,vector<int>> dismap;
    
    dfs(root,dismap,0);
    for(pair<int,vector<int>> p: dismap){
      cout<<p.first<<" ";
        for(int nodeval: p.second){
            cout<<nodeval<<" " ;
        }
        cout<<endl;
    }
    cout<<endl;
}