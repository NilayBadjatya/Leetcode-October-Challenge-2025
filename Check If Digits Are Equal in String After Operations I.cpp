class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string temp = "";
            for(int i = 1; i < s.size(); i++){
                int x = ((s[i] + '0') + (s[i-1] + '0')) % 10;
                temp += to_string(x);
            }
            s = temp;
        } 
        return s[0] == s[1];
    }
};
