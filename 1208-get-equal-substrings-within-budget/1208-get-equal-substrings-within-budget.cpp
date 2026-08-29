class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int sum = 0;
        int len  = 0;
        int n = s.size();

        int i = 0, j = 0;
        int mx = 0;

        while(j<n){

            int val = abs(s[j]-t[j]);

            if( (sum + val) <= maxCost ){
                sum += val;
            }
            else{
                sum += val;
                while(sum > maxCost && i<n){
                    sum -= abs(s[i]-t[i]);
                    i++;
                }
            }
            len = (j-i+1);
            j++;

            mx = max(mx,len);

        }

        return mx;
    }
};