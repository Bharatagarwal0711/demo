class Solution {
public:
    string reverseVowels(string s) {

        int n = s.size();
        string vowels = "";
        char x; 

        for(char ch: s){
            x = tolower(ch);
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') 
                vowels.push_back(ch);
        }

        for(int i=0;i<n;i++){
            x = tolower(s[i]);
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
                s[i] = vowels.back();
                vowels.pop_back();
            }
        }

        return s;
    }
};