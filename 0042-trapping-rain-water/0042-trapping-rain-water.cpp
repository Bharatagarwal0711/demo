class Solution {
public:
    int trap(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;

        int lmax = INT_MIN;
        int rmax = INT_MIN;

        int ans = 0;

        while(i<j){
            lmax = max(nums[i],lmax);
            rmax = max(nums[j],rmax);

            if(lmax < rmax){
                ans += lmax - nums[i++];
            }
            else ans += rmax - nums[j--];
        }

        return ans;
    }
};