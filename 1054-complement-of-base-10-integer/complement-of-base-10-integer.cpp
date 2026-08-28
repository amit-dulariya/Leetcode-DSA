class Solution {
public:
string bin(int x){
        string str = "";
        int c;
        while(x != 0){
            c = x % 2;
            str = str + to_string(c);
            x /= 2;
        }
        reverse(str.begin(),str.end());
        return str;
    }
    int deci(string s){
        int n = s.length()-1;
        int num = 0;
        for(int i = n;i>=0;i--){
            if(s[i] == '1'){
          num += pow(2,n-i);
            }
        }
        return num;
    }
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
         string ne = bin(n);
        string res = "";
        for(int i = 0;i<ne.length();i++){
            if(ne[i] == '1'){
                res += "0";
            }
            else{
                res += "1";
            }
        }
        return deci(res);
        
        
    }
};