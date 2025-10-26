class Bank {
public:
    vector<long long> nums;
    int n;
    Bank(vector<long long>& balance) {
        nums = balance;
        n = nums.size();
    }
    
    bool transfer(int acc1, int acc2, long long money) {
        if(acc1 <= 0 || acc1 > n || acc2 <= 0 || acc2 > n || nums[acc1-1] < money){
            return false;
        }
        nums[acc1-1] -= money;
        nums[acc2-1] += money;
        return true;
    }
    
    bool deposit(int acc, long long money) {
        if(acc <= 0 || acc > n){
            return false;
        }
        nums[acc-1] += money;
        return true;
    }
    
    bool withdraw(int acc, long long money) {
        if(acc <= 0 || acc > n || nums[acc-1] < money){
            return false;
        }
        nums[acc-1] -= money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
