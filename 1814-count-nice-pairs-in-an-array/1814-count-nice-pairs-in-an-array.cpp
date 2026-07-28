class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        long long count = 0;

        unordered_map<int,int> mp;

        for(int ele: nums){

            if(mp[ele-rev(ele)] > 0){
                count += mp[ele-rev(ele)];
            }
            mp[ele-rev(ele)]++ ;
        }

        return count % (1000000000+7);
    }

    int rev(int n){
        int ans = 0;

        while(n){
            ans *= 10;
            ans += n%10;
            n /= 10;
        }

        return ans;
    }
};