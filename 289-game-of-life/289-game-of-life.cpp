class Solution {
public:
    bool valid(int x,int y,vector<vector<int>>& board){
        // if(x>=0 && x<board.size() && y>=0 && y<board[0].size())
        //     cout<<"true"<<"\n";
        
        return (x>=0 && x<board.size()&& y>=0 && y<board[0].size());
        
        
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int> dx={0,0,1,1,1,-1,-1,-1};
        vector<int> dy={1,-1,1,-1,0,0,1,-1};
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                
                int liveNb=0;
                for(int i=0;i<8;i++){
                 int Curr_x=dx[i]+row;
                 int Curr_y=dy[i]+col;
                    if( valid(Curr_x,Curr_y,board) && abs(board[Curr_x][Curr_y])==1)
                        liveNb++;
                    
                }
                if(board[row][col]==1 && (liveNb<2 || liveNb>3))
                    board[row][col]= -1;
                if(board[row][col]==0 && liveNb==3)
                    board[row][col]=2;
            }
        }
        for(int row=0;row<board.size();row++){
             for(int col=0;col<board[0].size();col++){
                   if(board[row][col]>=1)
                      board[row][col]=1;
                   else
                      board[row][col]=0;
                }
                }
        
    }
    
};


