class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size() - 1;
        int res;
        int c = k;
        int j = 0;
        for(int i = j;i<=n;i++){
            if(nums[i] == c){
                c += k;
                j = 0;
            }
        }
        return c;
        
    }
};