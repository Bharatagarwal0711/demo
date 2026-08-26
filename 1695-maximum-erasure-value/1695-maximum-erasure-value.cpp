class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;

        int i=0, j=0;
        int sum = 0;
        int mx = 0;
        int n = nums.size();

        while(j<n){

            sum += nums[j];

            if(st.find(nums[j]) != st.end()){
                while(nums[i] != nums[j]){
                    sum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
                sum -= nums[i];
                st.erase(nums[i]);
                i++;
            }

            st.insert(nums[j]);
            mx = max(sum,mx);
            j++;
        }

        return mx;

    }
};