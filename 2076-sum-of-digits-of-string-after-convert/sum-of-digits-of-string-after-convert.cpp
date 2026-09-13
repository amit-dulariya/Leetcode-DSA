class Solution {
public:
    int getLucky(string s, int k) {
        string demo = "";
        for(auto c: s){
            demo += to_string(int(c)-96);
        } 
        string ans = "";
        while(k > 0){
            int num = 0;
             for(auto c: demo){
                ans = "";
                num += int(c) - 48;
             }
             ans += to_string(num);
             demo = ans;
             k--;

        }
         int res = stoi(ans);
         return res;
    }
};