#include<iostream>
using namespace std;
void ratchases(char maze[5][5],int m,int n,char result[5][5],int i,int j){
    //Base Case 
    if(i==m || j==n){
        return;
    }
    if(maze[i][j]=='x'){
        return;
    }
    if(i==m-1 and j==n-1){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    //Recursive Case
    result[i][j]='1';
    ratchases(maze,m,n,result,i,j+1);
    ratchases(maze,m,n,result,i+1,j);
    result[i][j]='0';
}
int main(){
     char maze[5][5] = {
        {'0','X','0','0','0'},
        {'0','0','0','X','0'},
        {'X','0','X','0','0'},
        {'0','0','0','0','0'},
        {'X','X','0','0','0'}
    };
   int m=5;
   int n=5;

    char result[5][5];

    ratchases(maze,m,n,result,0,0);
}