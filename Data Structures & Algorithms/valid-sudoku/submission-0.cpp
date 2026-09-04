class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        vector<int>row(9,0),col(9,0),sq(9,0);
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(b[i][j]=='.') continue;
                int a=b[i][j]-'1';
                if(row[i]&(1<<a) || col[j] &(1<<a)|| sq[(i/3)*3 +j/3]&(1<<a))
                {
                    return false;
                }
                row[i]|=(1<<a);
                col[j]|=(1<<a);
                sq[(i/3)*3+j/3]|=(1<<a);
                
            }
        }
        return true;
    }
};
