class Solution {
public:
string reverseParentheses(string s) {
        string ans="";
        int n = s.length();
        for(int i = 0;i<n;i++){
            if(s[i] == ')'){
                string temp = "";
                while(ans.back()!='('){
                    temp.push_back(ans.back());
                    ans.pop_back();
                    
                }
                ans.pop_back();
                ans += temp;

                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};