class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size();
       int subsets = 1<<n;
       vector<vector<int>>res;
    
       for(int i = 0;i<=subsets-1;i++){
            vector<int>sol;
            for(int j = 0;j<n;j++){
                if(i&(1<<j)){
                   
                    sol.push_back(nums[j]);
                }
            }
            res.push_back(sol);
        
       }
        return res;
    } 
};