class Solution {
public:
    string findLongestWord(string s, vector<string>& dick) {
        int n=dick.size();
        int sz=s.size();
        string ans="";
        
        for(int i=0;i<n;i++){
            string curr=dick[i];
            int a=0,b=0,c=0;
            
            while(a<sz && b<curr.size()){
                if(s[a]==curr[b]){
                    c++,
                    b++;
                }
                a++;
                
            }
            
            
            if(c==curr.size()){
                
                if(ans.size()<curr.size() || (ans.size()==curr.size()&&curr<ans) )
                    ans=curr;
            }
        }
        return ans;
        
    }
};