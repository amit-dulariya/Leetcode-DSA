class Solution {
public:
    int findFinalValue(vector<int>& nums, int k) {
        int n = nums.size();

        for(int i = 0;i<n;i++){
            if(k == nums[i]){
                k *= 2;
                return findFinalValue(nums,k);
            }
        }
        return k;
    }
};