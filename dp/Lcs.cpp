#include<bits/stdc++.h>
using namespace std;
int f(const string& s1, string& s2 , int m, int n, int i , int j){
    //Base Case 
    if(i==m || j==n){
        return 0;
    }
    //Recursive Case 
    if(s1[i]==s2[j]){
        return 1+f(s1,s2,m,n,i,j+1);
    }
    else{
        return max(f(s1,s2,m,n,i,j+1), f(s1,s2,m,n,i+1,j));
    }
}
int topdown(const string& s1, const string& s2, int m,int n,int i, int j,vector<vector<int>>& dp){
    //Base Case
    if(i==m || j==n){
        return 0;
    }
    //Lookup
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]){
        return dp[i][j]=1+topdown(s1,s2,m,n,i+1,j+1,dp);
    }
    else{
        return dp[i][j]=max(topdown(s1,s2,m,n,i,j+1,dp), topdown(s1,s2,m,n,i+1,j,dp));
    }
}
int bottomup(const string& s1, const string& s2, int m, int n){
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(s1[i]==s2[j]){
                dp[i][j]=1+dp[i+1][j+1];
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
int bottomupoptimized(const string& s1, const string& s2, int m,int n){
    vector<int> nextrow(m+1);
    for(int i=m-1;i>=0;i++){
        vector<int> curr(n+1);
        curr[n]=0;
        {
            for(int j=n-1;j>=0;j--){
                if(s1[i]==s2[j]){
                    curr[j]=1+nextrow[j+1];
                }
                else{
                    curr[j]=max(nextrow[j],curr[j+1]);
                }
            }
        }
        nextrow=move(curr);
    }
    return nextrow[0];
}
int bottommore(string& s1, string& s2, int m,int n){
    vector<int> dp(n+1);
    for(int i=m-1;i>=0;i--){
        int temp=0;
        for(int j=n-1;j>=0;j--){
            int temp2=dp[j];
            if(s1[i]==s2[j]){
                dp[j]=1+temp;
            }
            else{
                dp[j]=max(dp[j+1],dp[j]);
            }
            temp=temp2;
        }
    }
    return dp[0];
}
int main() {

	string s1("ATGC");
	string s2("AGCT");

	int m = s1.size();
	int n = s2.size();

	cout << f(s1, s2, m, n, 0, 0) << endl;
    vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
	cout << topdown(s1, s2, m, n,0,0,dp) << endl;
    cout<<bottomup(s1,s2,m,n);
    cout<<bottomupoptimized(s1,s2,m,n);
    cout<<bottommore(s1,s2,m,n);
	return 0; 
}