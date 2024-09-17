class Solution {
public:
    int solve(int n, int x, vector<vector<int>>&dp)
    {
        if(n==0)return 0;
        if(x*x>n) return INT_MAX-1;

        if(dp[n][x]!=-1)return dp[n][x];

        int pick=1+solve(n-(x*x),x,dp);
        int notPick=solve(n,x+1,dp);

        return dp[n][x]= min(pick,notPick);
    }
    int numSquares(int n) {
        vector<vector<int>>dp(n+1,vector<int>(int(sqrt(n))+1,-1));
        return solve(n,1,dp);
    }
};