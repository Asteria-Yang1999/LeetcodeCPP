class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) {
            return 0;
        }
    int n = intervals.size();
    sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    });
    int num = 0, edge = intervals[0][1];
    for(int i = 1; i < n; ++i){
        if(intervals[i][0] < edge){
            num++;
        }else{
            edge = intervals[i][1];
        }
    }
    return num;
    }
};