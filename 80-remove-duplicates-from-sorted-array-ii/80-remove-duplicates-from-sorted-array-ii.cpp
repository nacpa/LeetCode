class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // [1,1,1,2,2,3]
        int ans=0;
        for(auto i:nums){
            if(ans==0|| ans==1 || i!=nums[ans-2]){
                nums[ans]=i;
                ans++;
            } 
        }
        return ans;
        
    }
};