class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int , int> mp;
        for(int val:nums1)
            mp[val]++; 
        for(int val:nums2){
            auto it=mp.find(val);
            if(it!=mp.end()&& it->second>0)
            {   ans.push_back(val);
                it->second--;}
                }
        return ans;
    }
};