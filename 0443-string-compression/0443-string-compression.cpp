class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return 1;

        int itr = 0;    
        int count = 0;
        char var;

        int i = 0;
        while(i<chars.size()){
            count = 0;
            var = chars[i];

            while(i<chars.size() && var == chars[i]){
                count++;
                i++;
            }

            chars[itr] = var;
            itr++;
            if(count>1){
                string str = to_string(count);
                for(char ch: str){
                    chars[itr] = ch;
                    itr++;
                }
            }

        }
        return itr;

    }
};