class Solution {
public:
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        
        sort(properties.begin(),properties.end(),func);
        
        int min = INT_MIN;
        int ans=0;
        for (int i = properties.size()-1; i >=0; i--){
            if(properties[i][1]<min) ans++;
             min = max(min, properties[i][1]);
        }
        return ans;
        
    }
    
    
    static bool  func(vector<int> &a,vector<int> &b){
            
            if(a[0]==b[0]){
               return a[1]>b[1];
            }
            return a[0]<b[0];
        }
    
};