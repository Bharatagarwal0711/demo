class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Column wise Check

        for(int j=0;j<9;j++){
            vector<bool> temp(10);
            for(int i=0;i<9;i++){
                if(board[i][j] != '.'){
                    if(temp[board[i][j]-'0']) return false;
                    temp[board[i][j]-'0'] = 1;
                }
            }
        }

        // Row wise Check

        for(int i=0;i<9;i++){
            vector<bool> temp(10);
            for(int j=0;j<9;j++){
                if(board[i][j] != '.'){
                    if(temp[board[i][j]-'0']) return false;
                    temp[board[i][j]-'0'] = 1;
                }
            }
        }

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                if(check(board,i,j)==false) return false;
            }
        }

        return true;

    }

    bool check(vector<vector<char>>& board,int row,int col){

        unordered_set<char> temp;

        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
                if(board[i][j] != '.'){
                    if(temp.find(board[i][j]) != temp.end() ) return false;
                    temp.insert(board[i][j]);
                }
            }
        }

        return true;
    }

};