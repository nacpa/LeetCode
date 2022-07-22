class Solution {
public:
    bool canConstruct(string r, string m) {
        map<char,int> map1;
        for(auto& i:m){
            map1[i]++;
        }
        for( int i =0; i<r.size();i++){
             if(map1[r[i]]!=0){
                    map1[r[i]]--;
                }else{
                    return false;
                }
        }
        return true; 
    }
};
