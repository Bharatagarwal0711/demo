class Solution {
public:
    char repeatedCharacter(string s) {
        bool arr[26];

        for(char ch: s){

            int idx = ch-'a';

            if(arr[idx] == true) return ch;
            arr[idx] = 1;
        }

        return 'a';
    }
};