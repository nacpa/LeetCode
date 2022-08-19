class Solution {
public:
    int distributeCandies(vector<int>& c) {
        unordered_map<int,int>ans;
        int m=c.size()/2;
        for(auto& i:c ){
            ans[i]++;
        }
        if(ans.size()<=m)return ans.size();
        return m;
        
    }
};