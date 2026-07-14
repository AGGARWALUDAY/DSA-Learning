#include<iostream>
#include<vector> 
using namespace std;
void printout(vector<int> out){
    for(int i=0;i<out.size();i++){
        cout<<out[i]<<" ";
    }
    cout<<endl;
}
void findsubset(vector<int>& nums,int n,int i,vector<int>& out){
    if(nums.size()==0){
        cout<<" ";
    }
    //Base Case 
    if(i==n){
      printout(out);
      return;
    }
    //Recursive Case
    out.push_back(nums[i]);
    findsubset(nums,n,i+1,out);
    out.pop_back();
    findsubset(nums,n,i+1,out);

}
int main(){
    vector<int> nums={1,2,3};
    int n=nums.size();
    vector<int> out;
    findsubset(nums,n,0,out);
}