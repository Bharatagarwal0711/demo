class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        if(nums.size() == 1) return 0;

        int n = nums.size();
        int idx = -1;
        int low = 0;
        int high = nums.size()-1;
        int mid;

        while(low<=high){
            mid = low + (high-low)/2;

            if(mid == 0){
                if(nums[0] > nums[1]) return 0;
                else return 1;
            }
            else if(mid == n-1){
                if(nums[n-1] > nums[n-2]) return n-1;
                else return n-2;
            }

            else if(nums[mid]>nums[mid+1] && nums[mid] > nums[mid-1]) return mid;
            
            else if( nums[mid] > nums[mid+1]) high = mid-1;
            else low = mid+1; 
        }
        
        return mid;

    }
};