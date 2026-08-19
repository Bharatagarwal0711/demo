class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans;
        for(int ele: nums) ans.push_back(ele*ele);

        priority_queue<int> p(ans.begin(),ans.end());

        int i=nums.size()-1;
        while(!p.empty()){
            ans[i] = p.top();
            i--;
            p.pop();
        }

        return ans;

    }
};