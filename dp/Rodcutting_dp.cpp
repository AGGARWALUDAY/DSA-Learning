#include<bits/stdc++.h>
using namespace std;
int f(int n, vector<int>& p){
    //Base Case
    if(n==0){
        return 0;
    }
    //Recursive Case
    int maxsofar=0;
    for(int j=1;j<=n;j++){
        maxsofar=max(maxsofar,p[j-1]+ f(n-j,p));
    }
    return maxsofar;
}
int topdown(int n, vector<int>& p, vector<int>& dp){
    //looku
    if(dp[n]!=-1){
        return dp[n];
    }
    //Base case
    if(n==0){
        dp[n]=0;
    }
    int maxsofar=0;
    for(int j=1;j<=n;j++){
        maxsofar=max(maxsofar,p[j-1]+topdown(n-j, p, dp));
    }
    return dp[n]=maxsofar;
}
int bottomup(int n,vector<int>& p){
    vector<int> dp(n+1,-1);
    int maxsofar=0;
    dp[0]=0;
    for(int i=1;i<=n;i++){
        int maxsofar=0;
        for(int j=1;j<=i;j++){
            maxsofar=max(maxsofar,p[j-1] + dp[i-j]);
        }
        dp[i]=maxsofar;
    }
    return dp[n];
}
int main(){
    vector<int> p = {3,  5,  8,  9, 10, 17, 17, 20};
	int n = p.size();

	cout << f(n, p) << endl;
    vector<int> dp(n+1,-1);
    cout<<topdown(n,p,dp)<<endl;
    cout<<bottomup(n,p)<<endl;
}