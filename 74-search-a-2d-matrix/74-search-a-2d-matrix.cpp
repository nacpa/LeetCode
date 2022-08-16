class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix[0].size();
        int colums=matrix.size();
        int start=0;
        int end=(rows*colums)-1;
        if(!matrix.size()) return false;
        while(start<=end){
            
            int mid =(start+end)/2;
            if(matrix[mid/rows][mid%rows]==target)return true;
            if(matrix[mid/rows][mid%rows]<target)
            {
                start=mid+1;
            }
            else if(matrix[mid/rows][mid%rows]>target)
            {
                end=mid-1;
            }
            
        }
        return false;
        
        
        
    }
};