class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>ls;
        vector<int>rs;
        int ts = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            ts += nums[i];
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            ls.push_back(sum);
            sum += nums[i];
        }
        sum = 0;
        for(int i = 0;i<n;i++){
          sum += nums[i];
          rs.push_back(ts-sum);
        }
        for(int i = 0;i<n;i++){
            if(ls[i]==rs[i]) return i;
        }
        return -1;
    }
};