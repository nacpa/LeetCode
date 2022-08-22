class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i,s=0;
        for(i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1]){
                nums[s++]=nums[i];
            }
        }
        nums[s]=nums[n-1];
        return s+1;
        
    }
};