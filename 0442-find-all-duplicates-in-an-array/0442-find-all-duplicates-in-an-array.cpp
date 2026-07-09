class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int idx = 0;
        while(idx<n){
            int correctIdx = nums[idx]-1;
            if(nums[correctIdx] == nums[idx]) idx++;
            else swap(nums[correctIdx], nums[idx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]-1 != i) ans.push_back(nums[i]);
        }
        return ans;
    }
};