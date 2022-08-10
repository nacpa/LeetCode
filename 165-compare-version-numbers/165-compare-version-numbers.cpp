class Solution {
public:
    int compareVersion(string v1, string v2) {
       int i=0,j=0;
        
        while(i<v1.size()|| j<v2.size()){
            int t1=0;
            int t2=0;
            while(i<v1.size() &&v1[i]!='.'){
                t1=t1*10+(v1[i]-'0');
                i++;
            }
            while(j<v2.size() && v2[j]!='.'){
                t2=t2*10+(v2[j]-'0');
                j++;
            }
            
            if(t1<t2)return -1;
            else if(t2<t1) return 1;
            i++;
            j++;
                
        }
        return 0;
        
    }
};