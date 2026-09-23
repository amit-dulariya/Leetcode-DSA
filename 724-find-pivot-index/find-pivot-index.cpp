class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    
        int n = nums.size();
        int ls = 0;
        int toSum = 0;
        for(int i  = 0;i<n;i++){
            toSum += nums[i];
        }
        for(int i = 0;i<n;i++){
            if(ls == toSum - ls - nums[i]){
                    return i;
            }
            ls += nums[i];
        }
       return -1;
    }
};