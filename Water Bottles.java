class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        while(numBottles > 1){
            ans += numBottles / numExchange;
            int extra = numBottles % numExchange;
            if(numBottles < numExchange){
                extra = 0;
            }
            numBottles = (numBottles / numExchange);
            numBottles += extra;
        }
        return ans;
    }
}
