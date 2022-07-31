class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> bl(nums.size(),false);
        for(int a: nums){
            bl[a]=true;
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++){
            if(bl[i]==false)
                ans.push_back(i);
                
        }
        return ans;
      
        
    }
};