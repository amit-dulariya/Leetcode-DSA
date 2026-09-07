class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
       int res = 0;
       int n = nums.size();
       unordered_map<int,int> mp;
       for(auto a : nums){
        mp[a]++;
       }
       for(auto a : mp){
        if(a.second==2){
            res ^= a.first;
        }
       }

       return res;
    }
};