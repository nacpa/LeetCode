class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size(),"null");
        map<int,int> rank;
        for(int i=0;i<score.size();i++)
            rank.insert({score[i],i});
        sort(score.begin(),score.end());
        reverse(score.begin(), score.end());
        for(int j=0;j< score.size();j++){
            string val;
            int r=rank[score[j]];
            if(j==0) val="Gold Medal";
            else if(j==1) val="Silver Medal";
            else if(j==2) val="Bronze Medal";
            else if(j>2) val=to_string(j+1);
            ans[r]=val;;
        }
        return ans;
        
        
        
        
    }
};