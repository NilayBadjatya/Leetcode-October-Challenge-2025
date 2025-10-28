class Solution {
public:

    bool moveRight(vector<int> nums, int idx){
        int n = nums.size();
        bool left = false;
        while(idx >= 0 && idx < n){
            if(nums[idx] > 0){
                nums[idx]--;
                left = !left;
            }
            if(left){
                idx--;
            }else{
                idx++;
            }
        }
        for(auto& x : nums){
            if(x > 0){
                return false;
            }
        }
        return true;
    }

    bool moveLeft(vector<int> nums, int idx){
        int n = nums.size();
        bool right = false;
        while(idx >= 0 && idx < n){
            if(nums[idx] > 0){
                nums[idx]--;
                right = !right;
            }
            if(right){
                idx++;
            }else{
                idx--;
            }
        }
        for(auto& x : nums){
            if(x > 0){
                return false;
            }
        }
        return true;
    }

    int countValidSelections(vector<int>& nums) {
        int n = nums.size(), count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                if(moveRight(nums, i)){
                    count++;
                }
                if(moveLeft(nums, i)){
                    count++;
                }
            }
        }
        return count;
    }
};
