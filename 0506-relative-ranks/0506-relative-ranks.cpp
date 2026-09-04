class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        priority_queue<int> pq;
        unordered_map<int,int> mp;

        int i = 0;
        for(int ele: score){
            mp[ele] = i++;
            pq.push(ele);
        }

        vector<string> ans(score.size());

        int rank = 1;

        while(pq.size()){
            
            int idx = mp[pq.top()];
            
            if(rank == 1) ans[idx] = "Gold Medal";
            else if(rank == 2) ans[idx] = "Silver Medal";
            else if(rank == 3) ans[idx] = "Bronze Medal";
            else ans[idx] = to_string(rank);

            pq.pop();
            rank++;

        }

        return ans;

    }
};