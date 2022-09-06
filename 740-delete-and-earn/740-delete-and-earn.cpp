class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=10001;
        vector<int>ans(n,0);
        for(int i :nums){
            ans[i]+=i;
        }
        int take=0,skip=0;
        for(int i=0;i<n;i++){
            int takeN=skip+ans[i];
            int skipN=max(skip,take);
            skip=skipN;
            take=takeN; 
        }
        return max(take,skip);
        
    }
};