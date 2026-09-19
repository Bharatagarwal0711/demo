class Solution {
public:
    bool hasAlternatingBits(int n) {

        int prev = -1;

        while(n){

            int last = n % 2;

            if(prev == last) return false;
            prev = last;

            n /= 2;
        }
        
        return true;
    }
};