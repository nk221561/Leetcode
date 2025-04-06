class Solution {
    public int coinChange(int[] coins, int amount) {
        int n = coins.length;
        int[] dp = new int[amount+1];
        Arrays.fill(dp,amount+1);  
        dp[0] = 0;  
        for(int i=1;i<=amount;i++) {
            for(int c : coins) {
                if(i-c >= 0) {
                    dp[i] = Math.min(dp[i],dp[i-c] + 1);
                }
            }
        }
        if(dp[amount]>amount) {
            return -1;
        }
        return dp[amount];
    }
}