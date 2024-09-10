class Solution {
public:    
    int findLowestCoins(vector<int> &coins, int cur, int amount,vector<vector<int>>&dp) {
        if (cur >= coins.size())return INT_MAX-1; 
        if(amount==0) return 0; 

        if(dp[cur][amount]!=-1)return dp[cur][amount];
        
        int pick=INT_MAX-1,notpick=INT_MAX-1;

        if (coins[cur] <= amount) {
            pick = 1 + findLowestCoins(coins, cur , amount - coins[cur],dp);
        }
        
        notpick = findLowestCoins(coins, cur + 1, amount ,dp);
        
        return dp[cur][amount]=min(pick,notpick);
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        int res = findLowestCoins(coins, 0, amount,dp);
        return (res == INT_MAX-1) ? -1 : res;
    }
};