class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> s;
        int count = 0;

        for(int ele: nums){
            int diff = k-ele;

            if(s.find(diff) != s.end()){
                count++;
                s[diff]--;
                if(s[diff] == 0) s.erase(diff);
            }
            else s[ele]++;
        }

        return count;
    }
};