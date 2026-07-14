#include<iostream>
using namespace std;
class Treenode{
    public:
    int val;
    Treenode* left;
    Treenode* right;

    Treenode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void printpreorder(Treenode* root){
//Base case
if(root==NULL){
    cout<<-1;
return;}
    cout<<root->val;" ";
    printpreorder(root->left);
    printpreorder(root->right);

}
void inorder(Treenode* root){
    //base Case
    if(root==NULL)
    {
        cout<<"-1"<<" ";
        return;
    }
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void pripostorder(Treenode* root){
    //Base Case
    if(root==NULL)
    {
        cout<<"-1"<<" ";
        return;
    }
    pripostorder(root->left);
    pripostorder(root->right);
    cout<<root->val<<" ";

}
Treenode* buildtree(){
   
    int val;
    cin>>val;
     //Base case
    if(val==-1){
    return NULL;
    }
    Treenode* root=new Treenode(val);

    root->left=buildtree();
    root->right=buildtree();

    return root;

}
int main(){
   Treenode* root = NULL;
   root=buildtree();
    
	// root = new Treenode(10);
	// root->left = new Treenode(20);
	// root->right = new Treenode(30);
	// root->left->left = new Treenode(40);
	// root->left->right = new Treenode(50);
	// root->right->right = new Treenode(60);
	// root->left->right->left = new Treenode(70);

	printpreorder(root);

	cout<<endl;

	return 0;
}