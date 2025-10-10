class Solution {
public:

    int solve(vector<int>& energy, int i, int k, int taken, vector<vector<int>>& dp){
        if(i >= energy.size()){
            if(taken)
                return 0;
            else
                return INT_MIN;
        }
        if(dp[i][taken] != -1){
            return dp[i][taken];
        }
        int take = energy[i] + solve(energy, i + k, k, 1, dp);
        int skip = INT_MIN;
        if(!taken)
            skip = solve(energy, i + 1, k, taken, dp);   
        return dp[i][taken] = max(take, skip);
    }

    int maximumEnergy(vector<int>& energy, int k) {
        int n = energy.size();
        vector<vector<int>> dp(n+1, vector<int> (2, -1));
        return solve(energy, 0, k, 0, dp);
    }
};
