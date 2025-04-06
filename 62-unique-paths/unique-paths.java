class Solution {
    public int uniquePaths(int m, int n) {
        
        int[][] dp = new int[m][n];
        
       
        for (int i = 0; i < m; i++) {
            dp[i][0] = 1;
        }
        
        
        for (int j = 0; j < n; j++) {
            dp[0][j] = 1;
        }
        
       
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        
       
        return dp[m-1][n-1];
    }
    
    public static void main(String[] args) {
        Solution solution = new Solution();
        
        
        int result1 = solution.uniquePaths(3, 7);
        System.out.println("Unique paths for 3x7 grid: " + result1); // 28
        
        int result2 = solution.uniquePaths(3, 2);
        System.out.println("Unique paths for 3x2 grid: " + result2); //  3
    }
}