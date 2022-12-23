class Solution {
public:
    int func(int i ,int j, vector<vector<int>>& tri,int n,vector<vector<int>> &dp){
    if(i==n-1) return tri[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    int dia = tri[i][j] +func(i+1,j+1,tri,n,dp);
    int down =tri[i][j]+func(i+1,j,tri,n,dp);
    return dp[i][j]= min(dia,down); 
    
    
}
    
    int minimumTotal(vector<vector<int>>& tri) {
        int n=tri.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return func(0,0,tri,n,dp);
        
    } 
};
