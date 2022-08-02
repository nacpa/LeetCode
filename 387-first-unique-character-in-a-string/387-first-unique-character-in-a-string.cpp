class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>map1;
        for(auto& i:s){
            map1[i]++;
        }
        for(int i=0; i<s.size();i++){
            if(map1[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};