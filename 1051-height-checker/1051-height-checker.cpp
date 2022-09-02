class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> temp(heights);
        sort(heights.begin(),heights.end());
        int ans=0;
        
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=temp[i])
                ans++;
        }
        return ans;
    }
};