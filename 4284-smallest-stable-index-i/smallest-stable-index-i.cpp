class Solution {
public:
    int maximum(vector<int>& nums,int i){
        int ma = INT_MIN;
        for(int j  = 0;j<=i;j++){
            ma = max(nums[j],ma);
        }
        return ma;
    }
    int minimum(vector<int>& nums,int i,int n){
        int res = INT_MAX;
        for(int k = i;k<=n;k++){
            res = min(nums[k],res);
        }
        return res;

    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size()-1;
        for(int l = 0;l<=n;l++){
            int sol = maximum(nums,l) - minimum(nums,l,n);
            if(sol <= k){
                return l;
            }
        }
return -1;
    }
};