class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<string,int> map1;
        for(int i=0; i<9;i++){
            for(int j=0; j<9;j++){
                if(board[i][j]!='.'){
                    map1[to_string(i)+"row"+board[i][j]]++;
                     map1[to_string(j)+"col"+board[i][j]]++;
                     map1[to_string((i/3)*3+j/3)+"box"+board[i][j]]++;
                }
        }
        }
        
        for(auto& i :map1){
            // cout << i.first << " " << i.second << "\n";
            // if(i.first == "1row1") cout << "hello girlss!!!\n";
            if(i.second>1){
                return false;
            }
        }
        return true;
    }
};