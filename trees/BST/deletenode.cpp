#include<iostream>
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
TreeNode* findmax(TreeNode* root, int key){
    if(!root){
        return NULL;
    }
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
TreeNode* deleteroot(TreeNode* root, int key){
    // base Case
    if(root==NULL) return NULL;
    //Recursive Case
    if(root->left==NULL and root->right==NULL){
        delete root;
        root=NULL;
    }
    else if(root->left==NULL and root->right!=NULL){
        TreeNode* temp=root->right;
        delete root;
        root=temp;
    }
    else if(root->left!=NULL and root->right==NULL){
        TreeNode* temp=root->left;
        delete root;
        root=temp;
    }
    else {
        TreeNode* maxm=findmax(root->left,key);
        swap(root->val,maxm->val);
        root->right=deleteroot(root->right,key);
    }
    return root;
}
void printinorder(TreeNode* root){
    //Base Case

    //Recursive Case
    printinorder(root->left);
    cout<<root->val<<" ";
    printinorder(root->right);
}
int main(){
    	TreeNode* root = new TreeNode(10);

	root->left = new TreeNode(5);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->left->right->left = new TreeNode(6);
	root->left->right->right = new TreeNode(9);
	root->left->right->right->left = new TreeNode(8);

	root->right = new TreeNode(15);
	root->right->left  = new TreeNode(13);
	root->right->right = new TreeNode(17);
    
    int key=10;
    root=deleteroot(root,key);

    printinorder(root);
}