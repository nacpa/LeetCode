class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> map1;
        int ans=0;
        for(auto&i:s)
            {map1[i]++;}
        for(int i=0;i<s.size();i++){
            if(map1[s[i]]%2!=0){
                ans+=1;
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if(map1[s[i]]>1){
                if(map1[s[i]]%2==0 ){
                     ans+=map1[s[i]];
                }
                else{
                   ans+=map1[s[i]]-1;
                }
                map1[s[i]]=1;
            }   
        }
        
        
        return ans;
        
    }
};