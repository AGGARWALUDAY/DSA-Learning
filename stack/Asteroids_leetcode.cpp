#include<iostream> 
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<int> asteroidCollision(vector<int>& asteroids){
    stack<int> s;
    for(int val:asteroids){
        if(!s.empty() and val<0 and s.top()>0){
            bool flag=true;
            while(!s.empty() and s.top()>0){
                if(abs(val)<s.top()){
                    flag=false;
                    break;
                }
                else if(abs(val)>s.top()){
                    s.pop();
                }
                else {
                    s.pop();
                    flag=false;
                    break;
                }
            }
            if(flag){
                s.push(val);
            }
        }
        else{
            s.push(val);
        }
    }
    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    reverse(ans.begin(),ans.end());

    return ans;
}
int main(){
    vector<int> asteroids = {7, 3, -4, 5, 2, -8, 2, 4, 1, -4};

	vector<int> ans=asteroidCollision(asteroids);

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	cout << endl;

	return 0;
}