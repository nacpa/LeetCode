class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> record(words.size());
        int ans=0;
        for(int i=0;i<words.size();i++){
            for(auto& j:words[i]){
                record[i] |= 1<<(j-'a');
            }
            for(int k=0;k<i;k++){ 
                if(!(record[i]&record[k])){
                    if(words[i].size()*words[k].size()>ans)
                        ans=words[i].size()*words[k].size();
                }
            }
        }
        return ans;
    }
};