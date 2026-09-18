class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int mx = 0;
        for(string str: sentences){

            int count = 0;
            stringstream ss(str);
            string word;

            while(ss >> word) count++;

            mx = max(count,mx);
        }

        return mx;

    }
};