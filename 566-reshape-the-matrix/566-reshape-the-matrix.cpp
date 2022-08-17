class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c));
        if(mat[0].size()*mat.size()!= r*c)  return mat;
        int row=0;
        int col=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0; j<mat[i].size();j++){
                ans[row][col]=mat[i][j];
                col++;
                if(col==c){
                    row++;
                    col=0;
                }
            }
        }
        return ans;
    }
};