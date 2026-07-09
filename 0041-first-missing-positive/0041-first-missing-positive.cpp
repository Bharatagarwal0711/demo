class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;

        while(idx<n){
            if(nums[idx]<=0 || nums[idx]>n){
                idx++;
                continue;
            }
            int correctIdx = nums[idx]-1;
            if(nums[correctIdx] == nums[idx]) idx++;
            else swap(nums[correctIdx],nums[idx]);
        }
        int i = 0;
        while(i<n){
            if(nums[i] != i+1) return i+1;
            else i++;
        }
        return n+1;
    }
};