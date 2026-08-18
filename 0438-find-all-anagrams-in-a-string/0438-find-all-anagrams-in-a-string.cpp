class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if(p.size()>s.size()) return ans;

        unordered_map<char,int> mp;
        for(char ch: p) mp[ch]++;

        for(int i=0;i<=s.size()-p.size();i++){
            unordered_map<char,int> temp;
            for(int j=0;j<p.size();j++)  temp[s[i+j]]++;
            
            if(temp == mp) ans.push_back(i);
        }

        return ans;

    }
};