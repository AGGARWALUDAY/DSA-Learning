#include<iostream>
using namespace std;
void printpath(char path[][10],int m,int n){
    // for(char ch:path){
    //     for(char x:ch){
    //         cout<<x;
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<path[i][j];
        }
        
        cout<<endl;
    }
    cout<<endl;
}
void  f(char maze[][10],char path[][10],int m,int n,int i,int j){
    //Base Case
    if(i>=n || j>=m){
        return;
    }
    else if(maze[i][j]=='X'){
        return;
    }
    else if(i==m-1 and j==n-1){
       path[i][j]='1';
        printpath(path,m,n);
        path[i][j]='0';
    }
    //Recursive Case
    path[i][j]='1';
   f(maze,path,m,n,i,j+1);
   f(maze,path,m,n,i+1,j);
   path[i][j]='0'; 
}
int main() {

	char maze[][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	char path[][10] = {
		"0000",
		"0000",
		"0000",
		"0000"
	};
	int m = 4;
	int n = 4;
	f(maze, path, m, n, 0, 0);

	return 0;
}