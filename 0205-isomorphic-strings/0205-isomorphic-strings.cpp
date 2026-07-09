class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> arr(300);

        for(int i=0;i<s.length();i++){
            int idx = s[i];
            if(arr[idx] == 0) arr[idx] = t[i];
            else if(arr[idx] != t[i]) return false;
        }
        vector<int> brr(300);
        for(int i=0;i<s.length();i++){
            int idx = t[i];
            if(brr[idx] == 0) brr[idx] = s[i];
            else if(brr[idx] != s[i]) return false;
        }
        return true;

    }
};