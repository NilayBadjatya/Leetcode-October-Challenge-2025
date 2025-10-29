class Solution {
    public int smallestNumber(int n) {
        int power = (int)(Math.log(n) / Math.log(2)) + 1;
        return (1 << power) - 1;
    }
}

// C++

class Solution {
public:
    int smallestNumber(int n) {
        int power = log2(n) + 1;
        return (1 << power) - 1;;
    }
};
