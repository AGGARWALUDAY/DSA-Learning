#include<iostream>
using namespace std;
class treenode{
    public:
    int val;
    treenode* left;
    treenode* right;
    treenode(int val){
        this->val=val;
        this->left=NULL;s
        this->right=NULL;
    }
};

treenode* buildtree(){
    int val;
    cin>>val;
    //Base case
    if(val==-1){
        return NULL;
    }
    treenode* root=new treenode(val);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}
string  printparenthesis(treenode* root){

    if(root==NULL){
        return "" ;
    }
    string lefttree=printparenthesis(root->left);
    string righttree=printparenthesis(root->right);
    if(root->left!=NULL and root->right!=NULL)
    return to_string(root->val)+ "("+ lefttree + ")"+"(" + righttree+")";
    else if(root->left!=NULL and root->right==NULL)
    return to_string(root->val)+ "(" + lefttree + ")";
    else if(root->left==NULL and root->right!=NULL){
        return  to_string(root->val) + "()"+ "(" + righttree + ")";
    }

}
int main(){
    treenode*  root=NULL;
    root=buildtree();
    cout<<printparenthesis(root);
}