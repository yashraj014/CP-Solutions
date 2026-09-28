class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>st;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;

                string row = to_string(i)+string(1,board[i][j])+"ROW";
                string col = to_string(j)+string(1,board[i][j])+"COL";
                string el = to_string(i/3)+to_string(j/3)+string(1,board[i][j])+"EL";
                if(st.find(row)!=st.end() || st.find(col)!=st.end() || st.find(el) != st.end()) return false;

                st.insert(row);
                st.insert(col);
                st.insert(el);
            }
        }
    return true;
    }
};