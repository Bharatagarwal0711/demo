class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        if(nums.size() == 1) return true;

        bool inc = false;

        for(int i=1;i<nums.size();i++){
            if(nums[i] >= nums[i-1]) inc = true;
            else{
                inc = false;
                break;
            }
        }

        bool dec = false;

        for(int i=1;i<nums.size();i++){
            if(nums[i] <= nums[i-1]) dec = true;
            else{
                dec = false;
                break;
            }
        }

        return dec || inc;
    }
};