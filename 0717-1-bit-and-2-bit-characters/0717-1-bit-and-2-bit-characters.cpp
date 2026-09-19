class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        if(bits.size() == 1) return true;

        int n = bits.size();

        int x = -1;
        int i = 0;
        
        while(i<n){
            if(bits[i]){
                x = i+2;
                i = x;
            }
            else i++;
        }
        
        if(x == -1 || x < n-1 || x == n-1) return true;
        return false;

    }
};