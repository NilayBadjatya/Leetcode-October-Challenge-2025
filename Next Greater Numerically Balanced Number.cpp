class Solution {
public:

    bool isBalanced(string& s){
        int n = s.size();
        vector<int> mp(26, 0);
        for(auto& ch : s){
            mp[ch - '0']++;
        }
        for(int i = 0; i < n; i++){
            if(mp[s[i] - '0'] != (s[i] - '0')){
                return false;
            }
        }
        return true;
    }

    int nextBeautifulNumber(int n) {
        for(int i = n+1; ; i++){
            string s = to_string(i);
            if(isBalanced(s)){
                return i;
            }
        }
        return -1;
    }
};
