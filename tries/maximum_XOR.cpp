#include<iostream>
#include<vector>
using namespace std;
class node{
    node* left;
    node* right;

    node(){
        this->left=NULL;
        this->right=NULL;
    }
};
class trie(){
    node* root;
    public:

    trie (){
        root=new node();
    }
    void insert(int n){
        node* curr=root;
        for(i=31;i>=0;--){
            int ithbit=(n>>i)&1;
            if(ithbit==0){
                if(curr->left==NULL){
                    node* n=new node();
                    curr->left=n;
                }
                curr=curr->left;
            }
            else{
                if(curr->right==NULL){
                    node* n=new node();
                    curr->right=n;
                }
                curr=curr->right;
            }
        }
    }
    
};

int main(){
    int x[] = {2, 4, 5, 8, 10}; 
    int n=sizeof(x)/sizeof(int);
    trie t;
    for(int i=0;i<n;i++){
        t.insert(x[i]);
    }
    cout<<t.maximumxor(x,n);
}