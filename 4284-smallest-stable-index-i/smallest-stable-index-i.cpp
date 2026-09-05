class Solution {
public:
   
   
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>minval(n);
        int res = INT_MAX;
        int res2 = INT_MIN;
        
        for(int i = n-1;i>=0;i--){
            res = min(nums[i],res);
            minval[i] = res;
        }

        for(int l = 0;l<n;l++){
            res2 = max(res2,nums[l]);
            if(res2 - minval[l]  <= k){
                return l;
            }
        }
return -1;
    }
};