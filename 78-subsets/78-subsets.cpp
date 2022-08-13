class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int sz=nums.size();
        for(int i=0;i<pow(2,sz);i++){
            vector<int> temp;
            for(int j=0;j<sz;j++){
                if((1<<j)&i)
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};