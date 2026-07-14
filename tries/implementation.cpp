#include<iostream>
#include<map>
#include<vector>
using namespace std;
class node{
   public:
    char ch;
    bool terminal;
    unordered_map<char,node*> childmap;

    node(char ch){
        this->ch=ch;
        this->terminal=false;ṇ
    }
}
class trie(){
    node* root;

    trie(){
        root=new node('#');
    }
    void insert(string str){
        node* cur=root;
        for(char ch:str){
            if(childmap.find(ch)==childmap.end()){
                node* n=new node(ch);
                cur->childmap[ch]=n;
                cur=curr->childmap[ch];
            }
            else {
                cur=cur->childmap[ch];
            }
        }
        cur->terminal=true;
    }
};