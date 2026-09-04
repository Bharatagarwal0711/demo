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

        if(pq.size()){

            int idx = mp[pq.top()];
            ans[idx] = "Gold Medal";
            pq.pop();
        }

        if(pq.size()){

            int idx = mp[pq.top()];
            ans[idx] = "Silver Medal";
            pq.pop();
        }
        if(pq.size()){

            int idx = mp[pq.top()];
            ans[idx] = "Bronze Medal";
            pq.pop();
        }
        i = 4;
        while(pq.size()){

            int idx = mp[pq.top()];

            ans[idx] += to_string(i);
            i++;
            pq.pop();
        }

        return ans;

    }
};