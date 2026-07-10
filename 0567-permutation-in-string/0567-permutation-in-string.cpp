class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> str1(26);
        for(char ch: s1){
            str1[ch-'a']++;
        }

        int i=0;
        while(i<=s2.size()-s1.size()){

            vector<int> str2(26);
            int j=0;
            while(j<s1.size()){
                int idx = s2[i+j]-'a';
                str2[idx]++;
                j++;
            }

            if(str1 == str2) return true;

            i++;
        }
        return false;
    }
};