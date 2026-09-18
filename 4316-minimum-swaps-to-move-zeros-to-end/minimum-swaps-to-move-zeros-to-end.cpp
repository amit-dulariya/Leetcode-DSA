class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int ans = 0;
        int i = nums.size() - 1;
        int j = 0;
        while(j<i){
            if(nums[j] == 0 && nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
                i--;
                ans++;
            }
           else if(nums[i]== 0){
                i--;
            }
            else if(nums[j] != 0){
                j++;
            }
        }
     
          return ans;
    }
};