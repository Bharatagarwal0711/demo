class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string,int> mp;

        int count = 0;

        for(int i=0;i<words.size();i++){
            string temp = words[i];
            reverse(temp.begin(),temp.end());

            if(mp.find(temp) != mp.end()) count++;

            mp[words[i]] = i;
        }

        return count;
        
    }
};