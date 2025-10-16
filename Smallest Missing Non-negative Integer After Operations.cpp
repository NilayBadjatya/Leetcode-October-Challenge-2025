class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[(nums[i] % value + value) % value]++;
        }
        for(int i = 0; i < n; i++){
            if(mp[(i % value)] == 0){
                return i;
            }   
            mp[i % value]--;
        }
        return n;
    }
};
