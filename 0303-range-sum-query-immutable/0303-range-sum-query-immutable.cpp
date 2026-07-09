class NumArray {
public:
    vector<int> ans;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int i=0;i<n;i++){
            temp += nums[i];
            ans.push_back(temp);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return ans[right];
        return ans[right]-ans[left-1];
    }
};
