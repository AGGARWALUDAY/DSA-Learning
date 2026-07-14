#include<bits/stdc++.h>
using namespace std; 
int f(vector<int>& prices, vector<int>& weights, int w,int m, int n,int i){
    //Base Case
    if(i==n){
        return 0;
    }
    if(w<=0){
        return 0;
    }
    //Recursive Case 
    if(weights[i]>w){
        return f(prices,weights,w,m,n,i+1);
    }
    return max(prices[i]+f(prices,weights,w-weights[i],m,n,i), f(prices,weights,w,m,n,i+1));
}
int topdown(vector<int>& prices, vector<int>& weights, int w , int m ,int n, int i,vector<vector<int>>& dp){
    int j=w;
    //Base Case
    if(i==m || j<=0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(weights[i]>j){
        return dp[i][j]=topdown(prices,weights,j,m,n,i+1,dp);
    }
    //Recursive Case
    return dp[i][j]=max(prices[i]+ topdown(prices,weights,j-weights[i],m,n,i,dp) , topdown(prices,weights,j,m,n,i+1,dp));
}
int bottomdown(vector<int>& prices, vector<int>& weights, int w, int m , int n, vector<vector<int>>& dp){
    for(int j=0;j<=w;j++){
        dp[n][j]=0;
    }
    for(int i=n-1;i>=0;i++){
        for(int j=0;j<=w;j++){
            if(weights[i]>j){
                dp[i][j]=dp[i+1][j];
            }
            else{
                dp[i][j]=max(prices[i]+dp[i][j-weights[i]],dp[i+1][j]);
            }
        }
    }
    return dp[0][w];
}

int main(){
    vector<int> prices={6,3,8};
    vector<int> weights={3,1,4};
    int w=10;
    int m=prices.size();
    int n=weights.size();
    // cout<<f(prices,weights,w,m,n,0)<<endl;
    vector<vector<int>> dp(n+1, vector<int>(w+1));
    // cout<<topdown(prices,weights,w,m,n,0,dp);
    cout<<endl;
    cout<<bottomdown(prices,weights,w,m,n,dp)<<endl;
}