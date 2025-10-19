class Solution {
public:

    string rotateByB(string& s, int b){
        string res = "";
        int n = s.size();
        for(int i = n-1; i >= n-b; i--){
            res = s[i] + res;
        }
        for(int i = 0; i < n-b; i++){
            res += s[i];
        }
        return res;
    }

    string addOnOdd(string& temp, int a){
        int n = temp.size();
        string res = temp;
        for(int i = 1; i < n; i += 2){
            int x = ((temp[i] - '0') + a) % 10;
            res[i] = (x + '0');
        }
        return res;
    }

    string findLexSmallestString(string s, int a, int b) {
        queue<string> q;
        q.push(s);
        unordered_set<string> st;
        while(!q.empty()){
            string temp = q.front();
            // cout << temp << " ";
            q.pop();
            s = min(s, temp);
            string op1 = rotateByB(temp, b);
            string op2 = addOnOdd(temp, a);
            if(st.count(op1) == 0){
                st.insert(op1);
                q.push(op1);
            }
            if(st.count(op2) == 0){
                st.insert(op2);
                q.push(op2);
            }
        }
        return s;
    }
};
