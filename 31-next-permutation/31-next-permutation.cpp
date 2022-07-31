class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;
        int p=0;
        
        for(int i=n;i>0;i--){
            if(nums[i]>nums[i-1]){
                p=i;
                break;
            }
        
        }
            if(p==0) sort(nums.begin(),nums.end());
            else{
                int To_swap=nums[p-1];
                int dff=INT_MAX;
                for(int j=p;j<=n;j++){
                    if(nums[j]-To_swap>0 && nums[j]-To_swap<dff){
                        int temp=nums[j];
                        nums[j]=nums[p-1];
                        nums[p-1]=temp;
                    }
                }
                
                sort(nums.begin()+p,nums.end());
            }
            
            
            
        }
    
};