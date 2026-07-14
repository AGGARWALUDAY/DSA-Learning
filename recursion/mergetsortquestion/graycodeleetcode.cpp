#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<string>  graycode(int n)
    {
    //Base Case
    if(n==1){
       return{"0","1"};
    }
    //Recursive Case
        vector<string> result;
    vector<string> temp=graycode(n-1);
    for(int i=0;i<temp.size();i++){
       result.push_back("0"+temp[i]);
    }
    for(int i=temp.size()-1;i>=0;i--){
        result.push_back("1"+temp[i]);
    }
    return result;
}
int main(){
    int n=2;
    vector<string> ans;
    vector<string> result=graycode(n);
    for(int i=0;i<result.size();i++){
        ans.push_back(stoi(i,0,2));
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}