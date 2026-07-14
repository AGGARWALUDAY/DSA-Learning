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
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* buildtree(){
  int data;
  cin>>data;

  TreeNode* root= new TreeNode(data);
  queue<TreeNode*> q;

  q.push(root);

  while(!q.empty()){
    TreeNode* front=q.front();
    q.pop();

    int leftdata;
    cin>>leftdata;

    if(leftdata!=-1){
        TreeNode* leftchild= new  TreeNode(leftdata);
        front->left=leftchild;
        q.push(leftchild);

    }
    int rightdata;
    cin>>rightdata;

    if(rightdata!=-1){
        TreeNode* rightchild=new TreeNode(rightdata);
        front->right=rightchild;
        q.push(rightchild);
    }

  }
  return root;
}
void printlevelorder(TreeNode* root){
   queue<TreeNode*> q;
   q.push(root);
   q.push(NULL);

   while(q.empty()){
    TreeNode* front=q.front();
    q.pop();
    if(front==NULL){
        cout<<front
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    if(front->left!=NULL){
        q.push(front->left);
    }
    if(front->right!=NULL){
        q.push(front->right);
    }

   }
}
int main() {
    TreeNode* root=buildtree();
    printlevelorder(root);
}
