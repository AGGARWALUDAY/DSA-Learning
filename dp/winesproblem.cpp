#include<bits/stdc++.h>
using namespace std;
int f(const vector<int>& p, int i , int j, int years){
    //Base Case 
    if(i==j){
        return years*p[i];
    }
    //Recursive Case
    int a=years*p[i] + f(p,i+1,j,years+1);
    int b=years*p[j]+ f(p,i,j-1,years+1);
    return max(a,b);
}
int topdown(const vector<int>& p, int i , int j, int years,vector<int>& dp){
    //Base Case 
    if(dp )
    if(i==j){
        return years*p[i];
    }
    //Recursive Case
    int a=years*p[i] + f(p,i+1,j,years+1);
    int b=years*p[j]+ f(p,i,j-1,years+1);
    return max(a,b);
}
int main(){
    vector<int> p = {2, 3, 5, 1, 4};
	int n = p.size();
    vector<int> dp(n+1,-1);
	cout << f(p, 0, n - 1, 1) << endl;
    cout<<topdown(p,0,n-1,1,dp)<<endl;
}