class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
         vector<int>ans;
         int sum1 = 0,sum2 = 0;
         set<int>st;
         for(int i = 0;i<a.size();i++){
            sum1 += a[i];
         }
         for(int j = 0;j<b.size();j++){
            sum2 += b[j];
            st.insert(b[j]);
         }
         
         int final = (sum1+sum2)/2;
         for(int i = 0;i<a.size();i++){
          int val = final - sum1 + a[i];
            if(st.count(val)){
                ans.push_back(a[i]);
                ans.push_back(val);
                return ans;
            }
            
         }
         return ans;
    }
};