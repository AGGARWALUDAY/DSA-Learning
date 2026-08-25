class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        int i=0;
        int check;
        while(!q.empty()){
            i++;
            int node=q.top();
            q.pop();
            if(i==k) {check=node;break;}
        }
        return check;
    }
};