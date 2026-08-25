class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        int ans = 0;

        int no1 = 0, no0 = 0;

        while(j<n){

            if(nums[j]) no1++;
            else if(no0 < k) no0++;

            else if(no0 >= k){
                while(nums[i] != 0){
                    if(nums[i]) no1--;
                    i++;
                }

                i++;
            }
            ans = max(ans,no1+no0);
            j++;

        }

        return ans;
    }
};