class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();

        vector<int> ans;

        multiset<int> digit(digits.begin(),digits.end());
        multiset<int> temp;

        for(int i=100;i<1000;i+=2){

            bool flag = true;
            temp = digit;
            int num = i;

            while(num){
                if(temp.find(num%10) != temp.end()) temp.erase(temp.find(num%10));
                else{
                    flag = false;
                    break;
                }

                num /= 10;
            }

            if(flag) ans.push_back(i);

        }

        return ans;


    }
};