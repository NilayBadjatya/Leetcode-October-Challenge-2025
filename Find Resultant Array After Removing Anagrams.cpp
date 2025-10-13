class Solution {
public:

    bool checkAnagrams(string a, string b){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }

    vector<string> removeAnagrams(vector<string>& words) {
        while(true){
            bool flag = false;
            for(int i = 1; i < words.size(); i++){
                if(checkAnagrams(words[i], words[i-1])){
                    flag = true;
                    words.erase(words.begin() + i);
                    // i--;
                }
            }
            if(!flag) break;
        }
        return words;
    }
};
