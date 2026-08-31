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
    int hammingWeight(int n) {
      string sol =  bin(n);
      int res = 0;
      for(char c : sol){
        if(c == '1') res++;
      }
      return res;
    }
};