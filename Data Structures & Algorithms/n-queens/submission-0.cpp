class Solution {
public:
bool isPossible(int row,int col,vector<string>&board,int n){
    for(int j=0;j<n;j++){
        if(board[row][j]=='Q'){
            return false;
        }
            }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
                }
            }
            for(int i=row+1,j=col-1;i<n&& j>=0;i++,j--){
                if(board[i][j]=='Q'){
                    return false;
        }
    }
    return true;
}
void nQueen(int col,int n,vector<string>&board,vector<vector<string>>&result ){
       
    if(col==n){
        result.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
    if(isPossible(row,col,board,n)){
board[row][col]='Q';
nQueen(col+1,n,board,result);
board[row][col]='.';
    }
    }
}
    vector<vector<string>> solveNQueens(int n) {
      
      vector<vector<string>>result;
      vector<string>board(n,string(n,'.'));
      nQueen(0,n,board,result);  
      return result;
    }
};
