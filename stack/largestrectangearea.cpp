#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> f1(int h[],int n){
    stack<int> s;
    vector<int> ans;
    for(int i=0;i<n;i++){
        while(!s.empty() and h[i]<=h[s.top()]){
            s.pop();
        }
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            ans.push_back(s.top());
        }
        s.push(i);
    }
    return ans;
}
vector<int> f2(int h[],int n){
        stack<int> s;
        vector<int> ans;
    for(int i=n-1;i>=0;i--){
        while(!s.empty() and h[i]<=h[s.top()])
        s.pop();

        if(s.empty()){
            ans.push_back(n);
        }
        else{
            ans.push_back(s.top()); 
        }
        s.push(i);
    }
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){
    	int h[] = {2, 1, 5, 6, 2, 3};
	    int n = sizeof(h) / sizeof(int);

        vector<int> nsl=f1(h,n);
        vector<int> nsr=f2(h,n);
        long long area;
        long long  maxsofar=0;
        for(int i=0;i<n;i++){
        
        int height=h[i];
        int width=nsr[i]-nsl[i]-1;

            area=height* width;
            maxsofar=max(maxsofar,area);
        }
        cout<<maxsofar;

}