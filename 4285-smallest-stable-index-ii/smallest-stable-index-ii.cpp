class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxel = INT_MIN;
        int minel;
        vector<int> MinIdx(n);
        int minval = INT_MAX;
        for(int i = n-1;i>=0;i--){
            minval = min(minval,nums[i]);
            MinIdx[i] = minval;
        }
        for(int i = 0;i<n;i++){
            maxel = max(maxel,nums[i]);
            minel = MinIdx[i];
            if(maxel - minel <= k){
                return i;
            }
            
        }
return -1;
        
    }
};