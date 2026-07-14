#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> change(int A[],int n){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() and A[i]<=s.top().second){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(n);
        }
        else{
            ans.push_back(s.top().first);
        }
        s.push({i,A[i]});
    }
    reverse(ans.begin(),ans.end());
    
    return ans;
}
int main(){
	int A[] = {2, 5, 1, 3, 6, 4, 0};
	int n = sizeof(A) / sizeof(int);

    vector<int> ans=change(A,n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}
