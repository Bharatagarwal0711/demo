class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        unordered_map<string,int> mp;

        int i = 0;
        for(auto &str: list1) mp[str] = i++;

        i = 0;
        int sum = 0;
        int mn = INT_MAX;

        for(auto &str: list2){
            if(mp.find(str) != mp.end()){
                sum = i + mp[str];
                if(sum < mn) mn = sum;
            }

            i++;
        }

        vector<string> ans;

        i = 0;
        for(auto &str: list2){
            if(mp.find(str) != mp.end()){
                sum = i + mp[str];
                if(sum == mn) ans.push_back(str);
            }

            i++;
        }

        return ans;





    }
};