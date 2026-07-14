#include<iostream>
using namespace std;
class TreeNode{
    public:
    int  val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* buildtree(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    \

    TreeNode* root=new TreeNode(val);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}
void preorder(TreeNode* root){
    //Base case 
    if(root==NULL){
        cout<<"-1"<<" ";
        return;
    }

    //Recursive Case
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);

}
int main(){
    TreeNode* root=NULL;
    root=buildtree();

    preorder(root);

    return 0;
}