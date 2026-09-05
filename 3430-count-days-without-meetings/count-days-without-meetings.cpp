class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int st = 0;
        int end = 0;
        int res = 0;
        int n = meetings.size();
        for(int i = 0;i<n;i++){
            if(meetings[i][0]>end){
                res += meetings[i][0] - end - 1;
            }
            end = max(end,meetings[i][1]);
        }
        if(days>end){
            res += days - end;
        }
      return res;
    }
};