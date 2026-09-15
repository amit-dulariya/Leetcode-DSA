class Solution {
public:

    bool isHappy(int n) {
      set<int>st;
      
      while(true){
        int sum = 0;
        while(n!=0){
            int rem = n % 10;
            sum += (rem)*(rem);
            n /= 10;
        }
        n = sum;
        if(sum == 1) return true;
        if(st.count(sum)){
            return false;
        }
        else{
               st.insert(sum);
        }

      }
      return false;
    }
};