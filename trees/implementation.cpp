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
void printpreorder(TreeNode* root){
    //Base Case
    if(root==NULL){
        cout<<"-1"<<" ";
        return;
    }
    //Recursive Case

    cout<<root->val<< " ";

    printpreorder(root->left);
    printpreorder(root->right);

}
int main(){
    TreeNode* root=NULL;
    root=new TreeNode(10);
    root->left=new TreeNode(20);
    root->right=new TreeNode(30);
    root->left->left=new TreeNode(40);
    root->left->right=new TreeNode(50);
    root->right->left=new TreeNode(60);
    root->right->right=new TreeNode(70);

    printpreorder(root);

    return 0;
}
