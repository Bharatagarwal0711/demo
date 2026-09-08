class Solution {
public:
    int findLHS(vector<int>& nums) {

        int ans = 0;
        unordered_map<int,int> mp;

        for(int ele: nums) mp[ele]++;

        for(auto [key,value]: mp){
            if(mp.find(key+1) != mp.end()){
                ans = max(ans,value+mp[key+1]);
            }
        }

        return ans;

    }
};