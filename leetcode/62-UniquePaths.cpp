class Solution {
public:
vector<vector<int>> dp;
int f(int m,int n, int i, int j){
    //Base Case
    if(i>=m || j>=n) return 0;
    if(i==m-1 and j==n-1){
        return 1;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    //Recursive Case
    int down=0;
     down+=f(m,n,i+1,j);
     int right=0;
     right+=f(m,n,i,j+1);
    return dp[i][j]=down+right;
}
    int uniquePaths(int m, int n) {
        dp.assign(m,vector<int>(n,-1));
       return  f(m,n,0,0);
    }
};