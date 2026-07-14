#include<iostream>
using namespace std;
int f(vector<int>& weights, vector<int>& color, int n, int m, int i, int curr,int prev,int w){
    //Base Case 

    //Recursive Case
    if(curr>prev){
        return max(weights[i]+f(weights,color,n,m,i+1,curr,prev,w-weights[i]),f(weights,color,n,m,i+1,))
    }
}
int main(){
    vector<int> weights={2,3,4,2,4,5,2,3};
    vector<int> color={1,1,1,2,,2,2,3,3};
    int n=weights.size();
    int m=3;
    int w=13;
    cout<<f(weights,color,n,0,1,0,w);
}