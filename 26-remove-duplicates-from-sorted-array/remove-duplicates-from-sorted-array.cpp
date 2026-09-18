class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
       int j = 0;
       for(int i = 1;i<n;i++){
          int temp = nums[i];
          if(nums[j] != temp){
            nums[++j] = temp;
          }
       }
       return j+1;
    }
};