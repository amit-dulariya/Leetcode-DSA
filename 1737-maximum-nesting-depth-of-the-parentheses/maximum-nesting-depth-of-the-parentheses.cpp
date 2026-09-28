class Solution {
public:
    int maxDepth(string s) {
        int a = 0;
        int ans = 0;
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i] == '('){
                a++;
            }
            if(s[i] == ')'){
               a--; 
            }
             ans = max(ans,a);
        }
        return ans;
        
    }
};