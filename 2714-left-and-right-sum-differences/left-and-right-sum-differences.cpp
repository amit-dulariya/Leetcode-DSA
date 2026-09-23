class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ls;
        vector<int> rs;
        int sum = 0;
        int n = nums.size();
        int tosum = 0;
        int ans;
        
        for(int i = 0;i<n;i++){
            ls.push_back(sum);
            sum += nums[i];
            tosum += nums[i];
        }
       sum = 0;
        for(int i = 0;i<n;i++){
           sum += nums[i];
           ans = tosum - sum;
           rs.push_back(ans);
            
           }
           vector<int>sol;
        for(int i = 0;i<n;i++){
          sol.push_back(abs(ls[i]-rs[i]));
        }

       return sol;    
       
    }
};