class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            while(i>0 && i<nums.size() && nums[i-1]==nums[i]) i++;
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                if(nums[i]+nums[start]+nums[end]==0){
                    ans.push_back({nums[i],nums[start],nums[end]});
                    start++; end--;
                    while(start < nums.size() && nums[start]==nums[start-1]) start++;
                    while(end >=0 && nums[end]==nums[end+1]) end--;
                }
                else if((nums[i]+nums[start]+nums[end])<0) start++;
                else if((nums[i]+nums[start]+nums[end])>0) end--;
            }
        }
        return ans;
    }
};