#include<iostream>
#include<queue>
using namespace std;
class TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
TreeNode* insert(TreeNode* root, int key){
    //Base Case
    if(root=NULL){
        return new TreeNode(key);
    }
    //Recursive Case
    if(key > root->val){
        root-right=insert(root->right,key);
    }
    else{
        root->left=insert(root->left,key);
    }
}
void LevelOrder(TreeNode* root){
    queue<TreeNode*> q;

}
int main(){
    TreeNode* root = NULL;

	root = insert(root, 10);

	root = insert(root, 5);
	root = insert(root, 3);
	root = insert(root, 7);

	root = insert(root, 15);
	root = insert(root, 13);
	root = insert(root, 17);

	printLevelOrder(root);

	cout << endl;

	printInOrder(root);
	cout << endl;
}