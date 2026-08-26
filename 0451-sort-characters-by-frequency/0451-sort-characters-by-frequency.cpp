class Solution {
public:
    string frequencySort(string s) {

        unordered_map<char,int> mp;
        for(char ch: s) mp[ch]++;

        priority_queue<pair<int,char>> pq;
        for(auto [ch,num]: mp) pq.emplace(num,ch);

        string ans = "";
        while(!pq.empty()){

            int x = pq.top().first;
            while(x){
                ans.push_back(pq.top().second);
                x--;
            }

            pq.pop();
        }

        return ans;
    }
};