class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;

        int sum = 10;

        while(sum > 9){

            sum = 0;
            
            while(num){
                sum += num % 10;
                num /= 10;
            }

            num = sum;

        }

        return sum;
    }
};