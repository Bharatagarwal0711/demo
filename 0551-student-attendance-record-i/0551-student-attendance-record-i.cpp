class Solution {
public:
    bool checkRecord(string s) {

        int count_absent = 0;
        if(s[0] == 'A') count_absent++;
        int n = s.size();

        int late_count = 1;

        for(int i=1;i<s.size();i++){

            if(s[i] == 'A') count_absent++;

            if(s[i] == 'L' && s[i-1] == 'L') late_count++;
            else if(s[i] == 'L') late_count = 1;

            if(late_count >= 3) return false;
        }

        return count_absent < 2;
    }
};