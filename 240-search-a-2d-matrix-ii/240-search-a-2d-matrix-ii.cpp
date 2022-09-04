class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int first=0,last=col-1;
        while(first<row && last > -1){
            int e=matrix[first][last];
            if(e==target) return true;
            else if(target > e) first++;
            else
                last --;
        }
        return false; 
    }
};