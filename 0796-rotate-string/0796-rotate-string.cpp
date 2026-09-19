class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        int i=0;
        int n = s.size();

        while(i<n){
            s.push_back(s[i]);
            
            if(s.substr(i+1) == goal) return true;

            i++;
        }

        return false;

    }
};