class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();
        int a = INT_MIN;
        for(int i = 0;i<n;i++){
            a = max(a,nums[i]);
        }
        int r = 0;
        int k;
        for(int i = 0;i<n;i++){
            if(nums[i]*2<=a){
              r++;
            }
            if(a == nums[i]){
                k = i;
            }

        }
        return (r+1 == n)?k:-1;
    }
};