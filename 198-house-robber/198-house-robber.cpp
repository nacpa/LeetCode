class Solution {
public:
    int func(int n,vector<int> &nums, vector<int> &dp){
        if(n==0)return nums[n];
        if(n<0) return 0;
        if(dp[n]!= -1) return dp[n];
        int Choose=nums[n]+func(n-2,nums,dp);
        int NotChoose=func(n-1,nums,dp);
        return dp[n]=max(Choose,NotChoose);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return func(n-1,nums,dp);
    }
};