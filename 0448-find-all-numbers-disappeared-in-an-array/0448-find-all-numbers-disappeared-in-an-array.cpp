class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        int idx = 0;
        while(idx<n){
            int correctIdx = nums[idx]-1;
            if(nums[correctIdx] == nums[idx]) idx++;
            else swap(nums[correctIdx], nums[idx]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]-1!=i) ans.push_back(i+1);
        }
        return ans;
    }
};