class Solution {
public:
    void sortColors(vector<int>& nums) {
       int start=0,i=0,end=nums.size()-1;
        while(i<=end){
            if(nums[i]==0)
                swap(nums[start++],nums[i++]);
            else if(nums[i]==2)
                swap(nums[end--],nums[i]); 
            else i++;
        }
        
    }
};