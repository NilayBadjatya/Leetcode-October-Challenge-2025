class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();
        sort(potions.begin(), potions.end());
        vector<int> pairs(n, 0);
        for(int i = 0; i < n; i++){
            if(ceil(success * 1.0 / spells[i]) > INT_MAX) continue;
            int req = ceil(success * 1.0 / spells[i]);
            // cout << req << " ";
            int idx = lower_bound(potions.begin(), potions.end(), req) - potions.begin();
            pairs[i] = (m - idx);
        }
        return pairs;
    }
};
