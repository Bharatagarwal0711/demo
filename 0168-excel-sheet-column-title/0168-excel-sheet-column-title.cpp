class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        int factor = 1;
        while(columnNumber){

            int num =  columnNumber % 26;
            if(num == 0){
                ans.push_back('Z');
                columnNumber--;
            }
            else{
                char ch = 64 + num;
                ans.push_back(ch);
            }
            
            columnNumber /= 26;

        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};