class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        //row check

        for(int i=0;i<rows;i++){
            if(grid[i][0] == 0){
                for(int j=0;j<cols;j++)  grid[i][j] = grid[i][j] == 0 ? 1 : 0; 
            }
        }

        // column check

        for(int j=0;j<cols;j++){
            int noo = 0;
            int noz = 0;

            for(int i=0;i<rows;i++){
                grid[i][j] == 0 ? noz++ : noo++;
            }
            if(noz>noo){
                for(int i=0;i<rows;i++)  grid[i][j] = grid[i][j] == 0 ? 1 : 0;   
            }
        }

        int ans = 0;

        for(int i=0;i<rows;i++){
            int fact = 1;
            for(int j=cols-1;j>=0;j--){
                ans += grid[i][j]*fact;
                fact *= 2;
            }
        }
        return ans;
    }
};