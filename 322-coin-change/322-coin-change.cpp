class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1);
        for(int i = 1; i <= amount; ++i) {
            dp[i] = amount + 1;
        }
        
        for(int i = 1; i <= amount; ++i) {
            for(int c : coins) {
                if(c > i) continue;
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        
        return dp[amount] != amount + 1 ? dp[amount] : -1;
    }
};