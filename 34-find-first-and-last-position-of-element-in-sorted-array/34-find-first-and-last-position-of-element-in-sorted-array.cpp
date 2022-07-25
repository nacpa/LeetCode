class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int lower= -1;
        int upper= -1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==target){
                if(lower==-1){
                    lower=i;
                }
                upper=i;
            }
        }
        ans.push_back(lower);
        ans.push_back(upper);
        return ans;
        
    }
};