#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

	int arr[] = { -2, 0, -1, 2, -3, 1, 3};
    int n=sizeof(arr)/sizeof(int);
    int k=4;
    int i=0;
    int j=0;
    queue<int> q;
    while(j<k){
        if(arr[j]<0){
            q.push(arr[j]);
        }
        j++;
    }
    vector<int> ans;
    if(q.empty()){
        ans.push_back(0);
    }
    else {
    ans.push_back(q.front());
}
    while(j<n){
        if(arr[i]<0) q.pop();

        i++;
        if(arr[j]<0) q.push(arr[j]);

        if(q.empty()){
            ans.push_back(0);
        }
        else {
            ans.push_back(q.front());
        }
        j++;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}