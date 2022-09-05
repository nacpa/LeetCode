class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto& i:nums){
            map[i]++;
        }
        for(auto& i: map){
            if(i.second>1) return i.first;
        }
        return -1;
    }
};