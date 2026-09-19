class Solution {
public:
    bool hasAlternatingBits(int n) {

        string str = "";

        while(n){
            str.push_back(n%2);
            n /= 2;
        }
        
        for(int i=1;i<str.size();i++) if(str[i] == str[i-1]) return false;
        
        return true;
    }
};