#include<iostream>
#include<queue>
using namespace std;
class TreeNode {
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val) {
		this->val = val;
		this->left = this->right = NULL;
	}
};
TreeNode* buildtree(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    TreeNode* root=new TreeNode(val);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
void printlevelwise(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* front=q.front();
        q.pop();
        if(front(root->left)!=NULL)
         q.push(root->left);

        if(front(root->right)!=NULL)
         q.push(root->right);

    }
}
int main(){
    TreeNode* root=buildtree();
    printlevelwise(root);
}