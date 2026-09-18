class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int mx = 0;
        for(int i=0;i<sentences.size();i++){
            int word = 0;

            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] == ' ') word++;
            }

            mx = max(mx,word+1);
        }

        return mx;

    }
};