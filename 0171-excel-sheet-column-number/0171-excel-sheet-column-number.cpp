class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        long long factor = 1;

        for(int i=columnTitle.size()-1; i>=0; i--){
            ans += factor * (columnTitle[i] - 64);
            factor *= 26;
        }

        return ans;
    }
};