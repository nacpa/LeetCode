class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        int direction=0;
        int left=0,right=n-1,top=0,bottom=n-1;
        int p=1;
            while(left<=right && top<=bottom)
            {
                if(direction==0){
                    for(int i=left;i<=right;i++)
                    {
                        ans[top][i]=p;
                        
                        p++;
                        
                    }
                    direction++;
                    top++;
                }
                 if(direction==1){
                    for(int i=top;i<=bottom;i++)
                    {
                        ans[i][right]=p;
                        p++;
                        
                    }
                    right--;
                    direction++;
                }
                 if(direction==2){
                    for(int i=right;i>=left;i--)
                    {
                        ans[bottom][i]=p;
                        p++;
                    }
                    bottom--;
                    direction++;
                }
                 if(direction==3){
                    
                    for(int i=bottom;i>=top;i--)
                    {
                        ans[i][left]=p;
                        p++;
                    }
                    left++;
                    direction++;
                }
                direction=direction%4;
            }
        
        return ans;
        
    }
};