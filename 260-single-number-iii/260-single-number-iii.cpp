class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans={0,0};
       long long int xy=0;
        for(auto& i:nums) xy ^=i;
        xy &= -xy;
        for(auto& i:nums){
            if(xy & i){
                ans[0]^=i;
            }else{
                ans[1]^=i;
            }
        }
        return ans;
        
    }
};