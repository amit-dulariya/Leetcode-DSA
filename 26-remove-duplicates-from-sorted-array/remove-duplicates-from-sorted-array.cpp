class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>mp;
       int n = nums.size();
       for(auto i: nums){
        mp[i]++;
       }
       int j = 0;
       for(auto x: mp){
           nums[j] = x.first;
           j++;
       }
       return j;
    }
};