class Solution {
public:
    int maxVowels(string str, int k) {
        unordered_set<char> vowels;
        vowels.insert('a'); vowels.insert('e'); vowels.insert('i'); vowels.insert('o'); vowels.insert('u');

        int count = 0;
        for(int i=0;i<k;i++) if(vowels.find(str[i]) != vowels.end()) count++;

        int j = k;
        int ans = count;
        int n = str.size();
        for(int i=1;i<=n-k;i++){

            if(vowels.find(str[i-1]) != vowels.end()) count--;
            if(vowels.find(str[j]) != vowels.end()) count++;
            
            ans = max(ans,count);
            j++;
        }   

        return ans;

    }
};