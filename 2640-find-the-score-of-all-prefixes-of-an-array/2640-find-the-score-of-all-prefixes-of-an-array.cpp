class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int max = INT_MIN, n = nums.size();
        vector<long long> ans(n);

        for(int i=0;i<n;i++){
            if(nums[i]>max) max = nums[i];
            ans[i] = nums[i] + max;
        }
        for(int i=1;i<n;i++) ans[i] += ans[i-1];
        return ans;  
    }
};