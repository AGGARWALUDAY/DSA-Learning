#include<bits/stdc++.h>
using  namespace std;
int f(const vector<vector<int>>& grid,int m, int n, int i, int j,vector<vector<int>>& dp){
    //Base Case
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(i==m-1 and j==n-1){
        return dp[i][j]=grid[i][j];
    }
    //Recursive Case 
    if(i==m-1){
        return dp[i][j]=grid[i][j]+ f(grid,m,n,i,j+1,dp);
    }
    if(j==n-1){
        return dp[i][j]=grid[i][j] + f(grid, m, n, i+1, j,dp);
    }
    return dp[i][j]=grid[i][j] + min(f(grid,m,n,i+1,j,dp) , f(grid, m, n,i, j+1,dp));
}
int fbottomoptimized(const vector<vector<int>>& grid, int m ,int n, int i , int j){
    vector<int> temp(n);
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(i==m-1 and j==n-1){
                temp[j]=grid[i][j];
            }
            else if(i==m-1){
                temp[j]=grid[i][j] + temp[j+1];
            }
            else if(j==n-1){
                temp[j]=grid[i][j] + temp[j];
            }
            else{
                temp[j]=grid[i][j] + min(temp[j],temp[j+1]);
            }
        }
    }
    return temp[0];
}
int main(){
    vector<vector<int>> grid = {
		{1, 3, 1},
		{1, 5, 1},
		{4, 2, 1}
	};

	int m = grid.size();
	int n = grid[0].size();
    vector<vector<int>> dp(m,vector<int>(n,-1));
	cout << f(grid, m, n, 0, 0,dp) << endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<fbottomoptimized(grid,m,n, 0, 0);
}
