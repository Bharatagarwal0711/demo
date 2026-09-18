class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = INT_MIN;
        for(int ele: candies) mx = max(mx,ele);

        vector<bool> ans(candies.size());

        for(int i=0;i<candies.size();i++){
            if((candies[i] + extraCandies) >= mx) ans[i] = true;
            else ans[i] = false;
        }

        return ans;
        
    }
};