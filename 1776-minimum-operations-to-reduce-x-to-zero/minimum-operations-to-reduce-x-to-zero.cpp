class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int st = 0;
        int end = nums.size()-1;
        int ans = 0;
        int sum = 0;
        unordered_map<int,int> mp; // sub array sum
       mp[0] = -1;
       
        for(int i = 0;i <= end ;i++){
            sum += nums[i];
            mp[sum] = i;
        
        }
        if(sum < x) return -1;
       int r = sum - x; // sliding window sum
       int ls = INT_MIN;
       sum= 0;
       for(int i = 0;i<=end;i++){
        sum += nums[i];
        int findSum = sum - r;
        if(mp.find(findSum) != mp.end()){
            int idx = mp[findSum];
            ls = max(ls,i-idx);
        }
       }
       

        return ls == INT_MIN ? -1:(end+1-ls);
    }
};