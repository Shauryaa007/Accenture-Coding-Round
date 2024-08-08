// count all palindromic subsequence

#include <bits/stdc++.h>>

using namespace std;

int Solve(string str, int i, int j, vector<vector<int>>&dp) {
    if (i == j) 
        return 1;

    if (i > j) 
        return 0;
    
    if(dp[i][j]!=-1)return dp[i][j];

    if (str[i] == str[j]) {
        
        return dp[i][j]= 1 + Solve(str, i + 1, j,dp) + Solve(str, i, j - 1,dp);
    } 
    else {
        
        return dp[i][j]= Solve(str, i + 1, j,dp) + Solve(str, i, j - 1,dp) - Solve(str, i + 1, j - 1,dp);
    }
}

// Driver program
int main() {
    string str;
    cin>>str;
    
    int n=str.size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    cout << Solve(str, 0, str.length() - 1,dp) << endl;
    return 0;
}
