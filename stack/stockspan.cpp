#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

vector<int> f(int A[],int n){
    vector<int> ans;
    stack<pair<int,int>> s;


    for(int i=0;i<n;i++){
        int j;
        while(!s.empty() and s.top().first<=A[i]){
            s.pop();
        }
        if(s.empty()){
            j=-1;
        }
        else{
            j=s.top().second;
        }

        ans.push_back(i-j);

        s.push({A[i],i});
    }

    return ans;
}
int main(){
    int A[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(A) / sizeof(int);

	vector<int> ans = f(A, n);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}