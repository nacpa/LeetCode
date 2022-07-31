class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long t1=LONG_MIN;
        long t2=LONG_MIN;
        long t3=LONG_MIN;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==t1||nums[i]==t2||nums[i]==t3)
                continue;
         if(nums[i]>t1){
                t3=t2;
                t2=t1;
                t1=nums[i];
            }
            else if(nums[i]>t2){
                t3=t2;
                t2=nums[i];
            }else if(t3<nums[i])
                t3=nums[i];
        }
        if(t3==LONG_MIN)
            return (int)t1;
        return t3;
    }
};