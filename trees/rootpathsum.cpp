#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void countpath(TreeNode* root,int targetsum,int count){
    //Base Case
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL and root==NULL){
         if(targetsum==root->val){
        count++;
    }
    return 0;
    }
    //Recusive Case

   count+=countpath(root->left,targetsum-root->val,count);
    count+=countpath(root->right,targetsum-root->val,count);
   
}
int main(){
    TreeNode* root=NULL;
	root = new TreeNode(4);

	root->left = new TreeNode(7);
	root->left->left = new TreeNode(3);
	root->left->left->left = new TreeNode(1);
	root->left->left->right = new TreeNode(8);
	root->left->right = new TreeNode(3);

	root->right = new TreeNode(6);
	root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(5);
    
    int count=0;
    
    int targetsum=4;
    
    countpath(root,targetsum,count);

    cout<<count;
    }