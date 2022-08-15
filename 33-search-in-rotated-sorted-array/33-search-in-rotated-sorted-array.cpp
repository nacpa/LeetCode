class Solution {
public:
    int search(vector<int>& nums, int target) {
        int sz=nums.size()-1;
        int start=0;
        int end=sz;
        while(start <= end)
        {
              int m= (start+end)/2;
            
              if(nums[m]==target) return m;
            
              if(nums[start]<=nums[m])
                 {
                if(nums[start]<=target && target<=nums[m])
                    end=m-1;
                else
                    start= m+1;
                  }
            else 
               { 
                if(nums[m]<=target && target <=nums[end])
                    start=m+1;
                else
                    end=m-1;
               }
            
        }
        
        return -1;
        
    }
};