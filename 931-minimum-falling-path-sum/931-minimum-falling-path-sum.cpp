class Solution {
public:
  int func(int i ,int j,vector<vector<int>> &mat,vector<vector<int>> &dp ){
    if(j<0 || j >= mat.size()) return INT_MAX;
    if(i== mat.size()-1) return mat[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int down=  func(i+1,j,mat,dp);
    int leftD=  func(i+1,j-1,mat,dp);
    int rightD=  func(i+1,j+1,mat,dp);
       return dp[i][j]=mat[i][j]+ min(leftD,min(down,rightD));
    
    
}
    int minFallingPathSum(vector<vector<int>>& mat) {
    int n =mat.size();
    int ans= INT_MAX;
    vector<vector<int>> dp(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        ans=min(ans , func(0,i,mat,dp)) ;
    }
    
    return ans;
        
    }
};