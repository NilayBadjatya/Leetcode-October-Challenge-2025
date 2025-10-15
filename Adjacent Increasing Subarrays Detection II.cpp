class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n = nums.size();
        int cnt = 1, preCnt = 0, ans = 0;
        for(int i = 1; i < n; i++){
            if(nums[i] > nums[i-1]){
                cnt++;
            }else{
                preCnt = cnt;
                cnt = 1;
            }
            ans = max(ans, min(cnt, preCnt));
            ans = max(ans, cnt / 2);
        }
        return ans;
    }
};
