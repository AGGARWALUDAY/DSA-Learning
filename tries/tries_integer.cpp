#include<iostream> 
using namespace std;
#include<map>
class node{
    public:
   node* left;
   node* right;

   node(){
    this->left=NULL;
    this->right=NULL;
   }
};
class trie{
    node* root;
    public:
    trie(){
        root=new node();
    }
    void insert(int n){
        for(int i=32;i>=0;i--){
            node* curr=root;
            int ith=(n>>i)&1;
            if(ith==0){
                if(curr->left==NULL){
                    curr->left=new node();
                }
                curr=curr->left;
            }
            else{
                if(curr->right==NULL){
                    curr->right=new node();
                }
                curr=curr->right;
            }
        }
    }
    bool search(int n){
        for(int i=32;i>=0;i--){
            node* curr=root;
            int ith=(n>>i)&1;
            if(ith==0){
                if(root->left==NULL){
                    return false;
                }
                curr=curr->left;
            }
            else{
                if(ith==1){
                    if(root->right==NULL){
                        return false;
                    }
                    curr=curr->right;
                }
            }
        }
        return true;
    }
};
int main(){
    int arr[] = {2, 4, 8, 5, 10};
	int n = sizeof(arr) / sizeof(int);
    trie t;
    for(int i=0;i<n;i++){
        t.insert(arr[i]);
    }
    	int brr[] = {1, 2, 5, 10, 25, 0};
	int m = sizeof(brr) / sizeof(int);

	for (int i = 0; i < m; i++) {
		t.search(brr[i]) ? cout << brr[i] << " is present" << endl :
		                        cout << brr[i] << " is absent" << endl;
	}

}