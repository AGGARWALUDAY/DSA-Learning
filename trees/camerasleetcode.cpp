#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=this->right=NULL;
    }
};
TreeNode* builtree(){
    int val;
    cin>>val;
    if(val==-1){
        return NULL;
    }
    TreeNode* root=new TreeNode(val);
    root->left=builtree();
    root->right=builtree();

}
void printlevelorder(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
       while(!q.empty()){

      TreeNode* front=q.front();
      q.pop();
cout<<front->val<<endl;
  while(front->left!=NULL){
    q.push(front->left);
    }
    while(front->right!=NULL){
        q.push(front->right);
    }

   }
}
int main(){
    cout<<"front";
    TreeNode* root=builtree();

    printlevelorder(root);

	return 0;
}
