class Solution {
public:
   bool func(int n,int k,vector<int> &arr,vector<vector<int>> &dp){
    if(k==0) return true;
    if(n==0) return (arr[0]==k);
     if(dp[n][k] != -1) return dp[n][k];
    bool notake =func(n-1,k,arr,dp);
    bool take = false;
      if(arr[n]<=k) take=func(n-1,k-arr[n],arr,dp);
   return dp[n][k]= take | notake;
}
    
    
    bool canPartition(vector<int>& arr) {
         int n =arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++) sum+=arr[i];
        if(sum%2==1) return false;
        int target =sum/2;
          vector<vector<int>> dp(n,vector<int>(target+1,-1));
          return (func(n-1,target,arr,dp));
        
    }
};