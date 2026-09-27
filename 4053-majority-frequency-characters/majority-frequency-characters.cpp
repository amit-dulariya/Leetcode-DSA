class Solution {
public:
    string majorityFrequencyGroup(string s) {
        map<char,int>mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }
        string ans = "";
        map<int,string>gp;
        for(auto x : mp){
            gp[x.second] += x.first;
        }
        for(auto y : gp){
            if(y.second.size()>=ans.size()){
                ans = y.second;
            }
        }
        return ans;
    }
};