class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n = arr.size();
        int idx = 0;

        while(idx<n){
            int correctIdx = arr[idx]-1;
            if(arr[correctIdx] == arr[idx] || correctIdx>=n) idx++;
            else swap(arr[correctIdx], arr[idx]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]-1 != i){
                ans.push_back(arr[i]);
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};