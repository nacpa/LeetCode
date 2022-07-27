class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map1;
        string temp;
        for(auto& i:strs){
            temp=i;
            sort(temp.begin(),temp.end());
             map1[temp].push_back(i);
             }
        for(auto& i :map1){
            ans.push_back(i.second);
        }
        return ans;
    }
};