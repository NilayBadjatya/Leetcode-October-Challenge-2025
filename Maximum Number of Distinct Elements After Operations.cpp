class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), prev = INT_MIN;
        unordered_set<int> st;
        for(int i = 0; i < n; i++){
            if(prev < nums[i] - k){
                nums[i] -= k;
            }else{
                nums[i] = min(prev + 1, nums[i] + k);
            }
            prev = nums[i];
            st.insert(nums[i]);
        }

        return (int)st.size();
    }
};
