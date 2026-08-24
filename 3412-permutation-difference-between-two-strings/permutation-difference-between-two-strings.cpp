class Solution {
public:

    int findPermutationDifference(string s, string t){
        int pos[26] = {};
        int res = 0;
        for(int i = 0;i<s.length();i++){
            pos[s[i]-'a'] = i;
        }
        for(int j = 0;j<t.length();j++){
            res += abs(j-pos[t[j]-'a']);
        }
        return res;
    }
};