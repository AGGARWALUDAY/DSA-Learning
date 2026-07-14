#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    int rows;
    int cols;

    node(int val,int row,int cols){
        this->val=val;
        this->rows=row;
        this->cols=cols;
    }

};
class compare{
    public:
    bool operator()(node* a, node* b){
        return a.>val > b.>val;
    }
};

int main(){
        vector<vector<int>> inp = {{1, 3, 5, 7},
        {2, 4, 6, 8},
        {0, 9, 10, 11}
    };

    int row = inp.size();
    int cols=inp[0].size();

    vector<int> out;
    priority_queue<node*,vector<node*>,compare> minheap;

    for(int i=0;i<row;i++){
        minheap.push((inp[i][0] , i, 0));
    }
    while(!minheap.empty()){
        node temp=minheap.top();
        minheap.pop();

        int rows=temp.row;
        int colsl=temp.cols;

        if(cols+1 > inp[row].size()){
            minheap.push(inp[row][cols+1], row, cols+1);
        }
    }
    for(auto p:ans){
        cout<< p<< " ";
    }
}