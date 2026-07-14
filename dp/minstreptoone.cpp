#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int ftopdown(int n, vector<int>& dp){
	//Lookup
	if(dp[n]!=-1){
		return dp[n];
	}
	//Base Case
	if(n==1){
		return dp[n]=0;
	}
	//Recursive Case
	int a=ftopdown(n-1,dp);
	int b=INT_MAX;
	if(n%2==0){
		b=ftopdown(n/2,dp);
	}
	int c=INT_MAX;
	if(n%3==0){
		c=ftopdown(n/3,dp);
	}
	return dp[n]=1+min(a,min(b,c));
}
int main() {
	int n=6;
	vector<int> dp(n+1,-1);
	cout<<ftopdown(n,dp);
	return 0;
}