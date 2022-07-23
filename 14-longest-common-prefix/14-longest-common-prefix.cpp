class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char c=strs[0][i];
            bool match=true;
            for (int j=1;j<strs.size();j++){
                if(strs[j].size()<i||c!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false){
                break;
            }else{
                ans.push_back(c);
            }
        }
        return ans;
        
    }
};