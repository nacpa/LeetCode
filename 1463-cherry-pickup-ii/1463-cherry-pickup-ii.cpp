class Solution {
public:
    int func(int ind,int j1,int j2,int n,int m, vector<vector<int>> &grid,vector<vector<vector<int>>> &dp){
    if(j1 < 0 || j1 >= n || j2 < 0 || j2 >= n){
        return -1e8;
    }
    
    if(dp[ind][j1][j2] != -1){
        return dp[ind][j1][j2];
    }
    if(ind == m - 1){
        if(j1 == j2){
            return grid[ind][j1];
        }else{
            return grid[ind][j1] + grid[ind][j2];
        }
    }
    int maxx = -1e8;
    for(int i = -1;i <= +1;i++){
        for(int j = -1;j <= +1;j++){
            int val = 0;
            if(j1 == j2){
                val = grid[ind][j1];
            }else{
                val = grid[ind][j1] + grid[ind][j2];
            }
            val += func(ind+1,j1+i,j2+j,n,m,grid,dp);
            maxx = max(maxx,val);
        }
    }
    return dp[ind][j1][j2] = maxx;
}
    int cherryPickup(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        
    int n = grid.size();
    vector<vector<vector<int>>> dp(r+1,vector<vector<int>>(c+1,vector<int>(c+1,-1)));
    return func(0,0,c-1,c,r,grid,dp);   
    }
};