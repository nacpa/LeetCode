class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> nacpa(n+1,0);
        for(auto& i: trust){
            nacpa[i[0]]--;
            nacpa[i[1]]++;
        } 
        for(int i=1;i<=n;i++){
            if(nacpa[i]==n-1) return i;
        }
        return -1;
        
    }
};