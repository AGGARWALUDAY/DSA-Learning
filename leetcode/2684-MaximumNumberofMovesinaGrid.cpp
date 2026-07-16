class Solution {
public:
vector<vector<int>> dp;
int xx[3]={-1,0,1};
int yy[3]={1,1,1};
int f(vector<vector<int>>& grid, int m ,int n, int i, int j){
    //Recursive Case
    int ans=0;
    if(dp[i][j]!=-1) return dp[i][j];
    for(int k=0;k<3;k++){
        int lx=xx[k]+i;
        int ly=yy[k]+j;
        if(lx>=0 and ly>=0 and lx<m and ly<n and grid[lx][ly]>grid[i][j]) {
           ans=max(ans,1+f(grid,m,n,lx,ly));
        }
    }
    return dp[i][j]= ans;
}
    int maxMoves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        dp.assign(m,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            ans=max(ans,f(grid,m,n,i,0));
        }
        return ans;
    }
};