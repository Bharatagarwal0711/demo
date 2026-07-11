class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        vector<int> x(arr.size());

        int temp = 0;
        for(int i=arr.size()-1;i>=0;i--){
            temp += arr[i];
            x[i] = temp;
        }
        int idx = -1;
        for(int i=0;i<arr.size();i++){
            if(x[i]>=0){
                idx = i;
                break;
            }
        }
        if(idx == -1) return 0;

        int fact=1;
        int ans = 0;
        for(int i=idx;i<arr.size();i++){
            ans += arr[i]*fact;
            fact++;
        }
        return ans;
    }
};