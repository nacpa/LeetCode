class Solution {
public:
    int calculate(string s) {
        int sz=s.size();
        int ans=0;
        if(sz==0)return 0;
        int currentNo=0, lastNo=0;
        char operation='+';
        
        for(int i=0;i<sz;i++)
        {
             char currentChar=s[i];
             if(isdigit(currentChar))
             {
                currentNo=(currentNo*10)+(currentChar-'0'); 
             }
            if(!isdigit(currentChar) && !isspace(currentChar) || i==sz-1)
             {
                if(operation=='+' || operation=='-')
                {
                    ans+=lastNo;
                    lastNo=(operation=='+')?currentNo:-currentNo;
                }
                else if(operation=='*')
                {
                    lastNo=lastNo*currentNo;
                }
                else if(operation=='/')
                {
                    lastNo=lastNo/currentNo;
                }
                operation=currentChar;
                currentNo=0;
             }
            
        }
        ans+=lastNo;
        return ans;
        
    }
};