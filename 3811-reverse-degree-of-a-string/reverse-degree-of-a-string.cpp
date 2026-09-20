class Solution {
public:
    int reverseDegree(string s) {
        int k = 71;
        int n = s.length();
        int ans = 0;
        int arr[26];
        int j = 0;
        for(int i = 26;i>=1;i--){
            arr[j] = i;
            j++;
        }
        for(int i = 0;i<n;i++){
            ans += arr[(int(s[i])-97)] * (i+1);
        }
        return ans;
    }
};