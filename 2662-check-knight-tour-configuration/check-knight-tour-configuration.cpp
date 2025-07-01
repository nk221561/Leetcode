class Solution {
public:
    bool check(vector<vector<int>> &grid ,int r, int c, int a, int s){
        if(r<0 || c<0|| r>=s||c>=s|| grid[r][c] !=a){
            return false;
        }
        if(a == s*s -1){
            return true;
        }

        bool A=check(grid,r-2, c+1, a+1, s);
        bool B=check(grid,r+2, c+1, a+1, s);
         bool C=check(grid,r-2, c-1, a+1, s);
          bool D=check(grid,r+2, c-1, a+1, s);
           bool E=check(grid,r+1, c-2, a+1, s);
            bool F=check(grid,r+1, c+2, a+1, s);
            bool G=check(grid,r-1, c+2, a+1, s);
            bool H=check(grid,r-1, c-2, a+1, s);

            return A||B||C||D||E||F||G||H;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {

        return check(grid, 0, 0,0, grid.size());
    }
};