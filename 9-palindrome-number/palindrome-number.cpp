class Solution {
public:
    bool isPalindrome(int x) {
    string str = to_string(x);
    int i = 0;
    int j = str.size() - 1;
    for(int i = 0 ;i<j;i++){
        if(str[i] != str[j]){
            return false;
        }
        j--;
    } 
    return true;
        
    }
};