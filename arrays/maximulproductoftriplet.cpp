#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    veector<int> nums={-10,-20,1,2,3};
    int n=nums.size();
    int maxsofar=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;j<n;j++){
               maxsofar=max( nums[i]*nums[j]*nums[k],maxsofar)
            }
        }
    }
    cout<<maxsofar;
}