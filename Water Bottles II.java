class Solution {
    public int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = 0, emptyBottles = 0;
        while(true){
            ans += numBottles;
            emptyBottles += numBottles;
            numBottles = 0;
            if(emptyBottles >= numExchange){
                emptyBottles -= numExchange;
                numBottles += 1;
                numExchange++;
            }else{
                break;
            }
        }
        return ans;
    }
}
