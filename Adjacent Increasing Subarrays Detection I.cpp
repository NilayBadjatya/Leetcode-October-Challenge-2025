class Solution {
public:

    bool isIncreasing(vector<int>& nums, int i, int j){
        for(int k = i; k < j; k++){
            if(nums[k] >= nums[k + 1]){
                return false;
            }
        }
        return true;
    }

    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        vector<pair<int, int>> vec;
        while(j < n){
            if(j - i + 1 < k){
                j++;
            }else if(j - i + 1 == k){
                bool prev = false;
                if(isIncreasing(nums, i, j)){
                    cout << i << " " << j << endl;
                    vec.push_back({i, j});
                }
                j++;
                i++;
            }
        }
        for(int i = 0; i < vec.size(); i++){
            for(int j = i + 1; j < vec.size(); j++){
                if(vec[j].first == vec[i].second + 1){
                    return true;
                }    
            }
        }
        return false;
    }
};
