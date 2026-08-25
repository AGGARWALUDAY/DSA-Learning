class Solution {
public:
unordered_map<int,int> mp;
vector<int> dp;
int f(string& s ,int i){
    int n=s.size();
    if(dp[i]!=-1) return dp[i];
    if(i==n){
        return 1;
    }
    if(s[i]=='0'){
        return 0;
    }
    int ways=f(s,i+1);
    if(i+1<n){
        int num=(s[i]-'0')*10 + (s[i+1]-'0');
        if(mp.count(num)){
            ways+=f(s,i+2);
        }
    }
    return dp[i]=ways;
}
    int numDecodings(string s) {
    for(int i=1;i<=26;i++){
        mp[i]++;
    }
    int n=s.size();
    dp.resize(n+1,-1);
    return  f(s,0);
    }
};