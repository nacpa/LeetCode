class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans=0;
        int x=0;
        int y=0;
        int Rx = 0, Ry = 0;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                 if(board[i][j]=='R'){
                     Rx=j;
                     Ry=i;
                     break;
                 }
            }
            if(Rx)break;
        }
        for(int i=Ry+1;i<board.size();i++){
            if(board[i][Rx]=='p'){
                ans++;
                break;}
            if(board[i][Rx]=='B') break;
        }
         for(int i=Ry-1;i>=0;i--){
            if(board[i][Rx]=='p'){
                ans++;
                break;}
            if(board[i][Rx]=='B') break;
        }
         for(int i=Rx+1;i<board.size();i++){
            if(board[Ry][i]=='p'){
                ans++;
                break;}
            if(board[Ry][i]=='B') break;
        }
         for(int i=Rx-1;i>=0;i--){
            if(board[Ry][i]=='p'){
                ans++;
                break;}
            if(board[Ry][i]=='B') break;
        }
        return ans;
        
        
        
    }
};