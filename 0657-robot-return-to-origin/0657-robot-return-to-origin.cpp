class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0, j=0;

        for(char ch: moves){
            
            switch(ch){
                case 'U' : i--; break;
                case 'D' : i++; break;
                case 'R' : j++; break;
                case 'L' : j--; break;
            }
        }

        return (i==0 && j==0);
    }
};