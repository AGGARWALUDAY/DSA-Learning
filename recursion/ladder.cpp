#include<iostream>
#include<vector>
using namespace std;
void generateladder(int n,int k,int i,vector<int>& path){
    //Base Case
    if(i==n){
        for(int l=0;l<path.size();l++){
            cout<<path[l]<<" ";
        }
        cout<<endl;
    }
    //Recursive Case

    for(int j=1;j<=k;j++){
       if(i+j<=n){
        path.push_back(j);
        generateladder(n,k,i+j,path);
        path.pop_back();
    }
}
}
int main(){
    int n=4;
    int k=3;
    vector<int> path;
    generateladder(n,k,0,path);
}