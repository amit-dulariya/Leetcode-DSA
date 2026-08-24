class Solution {
public:
int fun(int i,string s, string t){
      for(int j = 0;j<t.length();j++){
               if(s[i] == t[j]){
                 if ((i-j)>0){
                    return (i-j);
                 }
                 else return (j-i);
               }
        }
        return 0;
}
    int findPermutationDifference(string s, string t) {
        int  i = 0;
        int res = 0;
        while(i != s.length()){
            res += fun(i,s,t);
            i++;
        }

        return res;
    }
};