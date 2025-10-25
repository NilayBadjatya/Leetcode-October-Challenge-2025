class Solution {
public:
    int totalMoney(int n) {
        int dollar = 1, sum = 0, day = 1;
        while(day <= n){
            int temp = dollar;
            for(int j = 0; j < 7 && day <= n; j++){
                sum += temp;
                temp++;
                day++;
            }
            dollar++;
        }
        return sum;
    }
};
