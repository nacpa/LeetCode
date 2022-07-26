class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        for(int i: nums1){
             auto it = find(nums2.begin(), nums2.end(), i);
             int index=it-nums2.begin();
             int j=index;
            while(j<nums2.size()){
                if(i<nums2[j])
                {ans.push_back(nums2[j]);
                 break;
                   }
                else
                    if(i>=nums2[j] && j==nums2.size()-1)
                    {  ans.push_back(-1);  }    
            j++;
            } 
        }
        return ans;
        
        
    }
};