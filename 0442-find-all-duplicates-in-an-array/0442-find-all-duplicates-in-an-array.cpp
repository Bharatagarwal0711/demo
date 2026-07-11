class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            int correctIdx = nums[i]-1;
            if(nums[correctIdx] == nums[i]) i++;
            else swap(nums[correctIdx],nums[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-1 != i) ans.push_back(nums[i]);
        }
        return ans;


    }
};