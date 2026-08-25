class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int preva=intervals[0][0];
        int prevb=intervals[0][1];
        int count=0;
        for(int i=1;i<intervals.size();i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            if(a<prevb){
                count++;
                prevb=min(prevb,b);
            }
            else{prevb=max(prevb,b);}
        }
        return count;
    }
};