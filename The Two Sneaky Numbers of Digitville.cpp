class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int> res;
        for(auto x:mp){
            if(x.second == 2){
                res.push_back(x.first);
            }
        }
        return res;
    }
};
