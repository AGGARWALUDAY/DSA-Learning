class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int> mp;
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            string s="";
            if(matrix[i][0]==0){
                for(int j=0;j<n;j++){
                    s+=matrix[i][j];
                }
                mp[s]++;
            }
            else{
                for(int j=0;j<n;j++){
                    if(matrix[i][j]==0) matrix[i][j]=1;
                    else{
                        matrix[i][j]=0;
                    }
                }
                for(int j=0;j<n;j++){
                    s+=matrix[i][j];
                }
                mp[s]++;
            }
        }
        int ans=INT_MIN;
        for(auto p:mp){
            ans=max(p.second,ans);
        }
        return ans;
    }
};