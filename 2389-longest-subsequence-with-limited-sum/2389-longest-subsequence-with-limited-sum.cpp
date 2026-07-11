class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());

        vector<int> ans(queries.size());
        for(int i=1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }
        for(int i=0;i<queries.size();i++){
            int low = 0;
            int high = nums.size()-1;
            while(low<=high){
                int mid = low+(high-low)/2;
                if(nums[mid] == queries[i]){
                    ans[i] = mid+1;
                    break;
                }
                else if(nums[mid]>queries[i]) high = mid-1;
                else low = mid+1;
            }
            if(low>high) ans[i] = high+1;
        }
        return ans;
    }
};