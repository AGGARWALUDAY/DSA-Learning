#include<bits/stdc++.h>
using namespace std;
int f(vector<int>& wt, vector<int>& pr, int n, int i, int w){
    //Base
    if(i==n){
        return 0;
    }
    
    //Recursive Case
    if(wt[i]>w){
      return f(wt,pr,n,i+1,w);  
    }
    return max(pr[i]+f(wt,pr,n,i+1,w-wt[i]) ,f(wt,pr,n,i+1,w));
}
int topdown(vector<int>& wt, vector<int>& pr, int n, int i, int w,vector<vector<int>>& dp){
    //Base
    int j=w;
    if(i==n){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    } 
    //Recursive Case
    if(wt[i]>w){
      return f(wt,pr,n,i+1,w);  
    }
    return dp[i][j]= max(pr[i]+f(wt,pr,n,i+1,w-wt[i]) ,f(wt,pr,n,i+1,w));
}
int bottomup(vector<int>& wt, vector<int>& pr, int n, int w, vector<vector<int>>& dp){
    for(int j=0;j<=w;j++){
        dp[n][j]=0;
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=w;j++){
            if(wt[i]>j){
                dp[i][j]=dp[i+1][j];
            }
            else{
           dp[i][j]= max(pr[i]+dp[i+1][j-wt[i]] ,dp[i+1][j]);
       } }
    }
    return dp[0][w];
}
int main(){
    	int N = 5;
	int W = 4;

	vector<int> wt = {1, 2, 3, 2, 2};  
	vector<int> pr = {8, 4, 1, 5, 3};
    vector<vector<int>> dp(N+1,vector<int>(W+1,-1));
	// cout << f(wt, pr, N, 0, W) << endl;
    //cout<<topdown(wt,pr,N,0,W,dp);
    cout<<bottomup(wt,pr,N,W,dp)<<endl;

}