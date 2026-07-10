class Solution {
public:
    int matrixScore(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();
        for(int i=0;i<row;i++){
            if(arr[i][0] == 0){
                for(int j=0;j<col;j++){
                    if(arr[i][j] == 0) arr[i][j]=1;
                    else arr[i][j] = 0;
                }
            }
        }

        for(int j=0;j<col;j++){
            int noz = 0;
            int noo = 0;
            for(int i=0;i<row;i++){
                if(arr[i][j]==0) noz++;
                else noo++;
            }

            if(noz>noo){
                for(int i=0;i<row;i++){
                    if(arr[i][j] == 0) arr[i][j]=1;
                    else arr[i][j] = 0;
                }
            }
        }

        int ans = 0;
        for(int i=0;i<row;i++){
            int fact = 1;
            for(int j=col-1;j>=0;j--){
                ans += arr[i][j]*fact;
                fact *= 2;
            }
        }

        return ans;
    }
};