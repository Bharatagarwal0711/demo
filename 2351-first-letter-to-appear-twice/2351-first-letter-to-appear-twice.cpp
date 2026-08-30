class Solution {
public:
    char repeatedCharacter(string s) {
        bool arr[26];

        for(char ch: s){
            if(arr[ch-'a'] == true) return ch;
            arr[ch-'a'] = 1;
        }

        return 'a';
    }
};