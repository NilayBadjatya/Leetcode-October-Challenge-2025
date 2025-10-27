class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m = bank.size();
        int n = bank[0].size();
        unordered_map<int, int> mp;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(bank[i][j] == '1'){
                    mp[i]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < m; i++){
            int currentRow = 0;
            for(int j = 0; j < n; j++){
                if(bank[i][j] == '1'){
                    currentRow++;
                }
            }
            // Checking for the (i+1)'th rows.
            for(int k = i+1; k < m; k++){
                if(mp[k] > 0){
                    ans += (currentRow * mp[k]);
                    break;
                }
            }
        }
        return ans;
    }
};
