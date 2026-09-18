class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {

        vector<int> arr(nums.begin(),nums.end());
        unordered_map<int,int> mp;

        sort(arr.begin(),arr.end());
        int count = 0;

        for(int ele: arr){
            if(mp.find(ele) == mp.end()) mp[ele] = count;
            count++;
        }

        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            ans[i] = mp[nums[i]];
        }

        return ans;

    }
};