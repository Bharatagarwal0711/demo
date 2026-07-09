class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int idx = 0;
        while(idx<n){
            int correctIdx = nums[idx];
            if(nums[idx]>=n || idx==correctIdx) idx++;
            else swap(nums[idx],nums[correctIdx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return n;
    }
};