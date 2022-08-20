class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int ans;
        for(int i=0; i<nums.size();i++){
            int count=0;
            
            int curr=nums[i];
            int prev=nums[i]-1;
            if(st.find(prev)==st.end()){
                while(st.find(curr)!=st.end()){
                    curr++;
                    count++;
                }
                
            }
            ans=max(ans,count);
        }
        return ans;
        
    }
};