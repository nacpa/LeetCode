class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;
        int ans=0;
        vector<bool> v(n,true);
        for(int i=2; i*i<n;i++){
            if(!v[i]) continue;
            for(int j=i*i; j<n;j=j+i){
                v[j]=false;
                
            }
            
            
            
        }
        for(int i=2;i<n;i++){
            if(v[i]==true)
                ans++;
        }
        return ans;
        
    }
};