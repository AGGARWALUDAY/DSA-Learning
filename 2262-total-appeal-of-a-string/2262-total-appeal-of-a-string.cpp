class Solution {
public:
using ll=long long;
    long long appealSum(string s) {
        vector<int> mp(26,-1);
        ll  ans=0;
        ll  curr=0;
        vector<ll> final;
        for(int i=0;i<s.size();i++){
            int num=s[i]-'a';
            ll temp=i-mp[num];
            curr+=temp;
            final.push_back(curr);
            mp[num]=i;
        }
        for(int i=0;i<final.size();i++){
            ans+=final[i];
        }
        return ans;
    }
};