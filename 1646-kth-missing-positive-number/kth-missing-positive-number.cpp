class Solution {
public:
    bool bs(vector<int>& arr,int x){
            int st = 0;
            int end = arr.size()-1;
            while(st<=end){
                int mid = st+(end-st)/2;
                if(x == arr[mid]){
                    return 1; 
                }
                else if(x < arr[mid]){
                    end = mid - 1;
                }
                else{
                    st = mid + 1;
                }
            }
            return 0;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int end = arr[n-1]+k+1;
        vector<int>temp;
        for(int i = 1;i<=end;i++){
            temp.push_back(i);
        }
        vector<int>sol;
        for(int i = 0;i<temp.size();i++){
            if(!bs(arr,temp[i])){
                sol.push_back(temp[i]);
            }
        }
        return sol[k-1];
    }
};