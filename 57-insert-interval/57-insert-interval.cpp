class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int >> ans;
        for(int i =0 ;i<intervals.size();i++){
            
            if(newInterval[0]>intervals[i][1]){
                ans.push_back(intervals[i]);
            }
            if(
                (intervals[i][0]>=newInterval[0]&& intervals[i][0]<=newInterval[1])||
                (intervals[i][1]>=newInterval[0]&& intervals[i][1]<=newInterval[1])||
                (intervals[i][0]<=newInterval[0]&& intervals[i][1]>=newInterval[1])
            ){
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            }
            
            }
    
    ans.push_back(newInterval);
    
    for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]>newInterval[1])ans.push_back(intervals[i]);
       }
        
        return ans;
    }
};
