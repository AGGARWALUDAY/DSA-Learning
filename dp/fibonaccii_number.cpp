#include<iostream>
#include<vector>
using namespace std;
int count1=1;
int give(int n,vector<int>&dp){
    //Loopups
    count1++;
    if(dp[n]!=-1){
        return dp[n];
    }
    //Base Case
    if(n==1 || n==0){
        return dp[n]=n;
    }
    //Recursive Case
    return give(n-1,dp) + give(n-2,dp);
}
    int count2=0;
int give2(int n,vector<int>&dp){
    //Loopups
    count2++;
    if(dp[n]!=-1){
        return dp[n];
    }
    //Base Case
    if(n==1 || n==0){
        return dp[n]=n;
    }
    //Recursive Case
    return give2(n-1,dp) + give2(n-2,dp);
}
int main(){
    int n=7;
    vector<int> dp(n+1,-1);
    cout<<give(n,dp)<<endl;
    cout<<count2;

    cout<<give2(n,dp)<<endl;
    cou<<count2; 

}