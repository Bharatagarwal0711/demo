class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int> ans;
        for(int ele: nums) ans.push_back(nums[ele]);
        return ans;
        
    }
};