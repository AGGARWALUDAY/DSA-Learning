#include<bits/stdc++.h>
using namespace std;
int f(string& s1, string& s2, int m,int n, int i,int j){
    //Base Case
    if(i==m){
        return n-j;
    }
    if(j==n){
        return m-i;
    }
    //Recursive Case
   return  min(1+f(s1,s2,m,n,i,j+1),
    min(1+f(s1,s2,m,n,i+1,j),
    (int)(s1[i]!=s2[j]) + f(s1,s2,m,n,i+1,j+1)));
} 
int topdown(string& s1, string& s2, int m, int n,int i,int j,vector<vector<int>>& dp){
    //Base Case 
    if(i==m){
        return n-j;
    }
    if(j==n){
        return m-i;
    }
    //Lookup
    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    return dp[i][j]=min(1+topdown(s1,s2,m,n,i,j+1,dp),
    min(1+topdown(s1,s2,m,n,i+1,j,dp),
    (int)(s1[i]!=s2[j]) + topdown(s1,s2,m,n,i+1,j+1,dp)));
}
int bottomup(string& s1, string& s2, int m,int n){
    vector<vector<int>> dp(m+1,vector<int>(n+1));

    for(int j=0;j<=n;j++){
        dp[m][j]=n-j;
    }
    for(int i=0;i<=m;i++){
        dp[i][n]=m-i;
    }
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            dp[i][j]=min(1+dp[i][j+1],min(1+dp[i+1][j],(int)(s1[i]!=s2[j]) + dp[i+1][j+1]));
        }
    }
    return dp[0][0];
}
int main(){
    string s1="food";
    string s2="Money";
    int m=s1.size();
    int n=s2.size();
    cout<<f(s1,s2,m,n,0,0)<<endl;
    vector<vector<int>> dp(m+1, vector<int>(n+1,-1));
    cout<<topdown(s1,s2,m,n,0,0,dp)<<endl;
    cout<<bottomup(s1,s2,m,n)<<endl;
}