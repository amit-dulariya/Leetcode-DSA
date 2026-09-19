class Solution {
public:
    vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
         vector<int>ans;
         int sum1 = 0,sum2 = 0;
         for(int i = 0;i<a.size();i++){
            sum1 += a[i];
         }
         for(int j = 0;j<b.size();j++){
            sum2 += b[j];
         }
         for(int i = 0;i<a.size();i++){
            for(int j = 0;j<b.size();j++){
                if(sum1-a[i]+b[j]==sum2+a[i]-b[j]){
                    ans.push_back(a[i]);
                    ans.push_back(b[j]);
                    return ans;
                }
            }
         }
         return ans;
    }
};