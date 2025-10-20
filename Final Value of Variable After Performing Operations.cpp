class Solution {
public:
    int finalValueAfterOperations(vector<string>& ops) {
        int n = ops.size();
        int x = 0;
        for(int i = 0; i < n; i++){
            if(ops[i][0] == 'X'){
                if(ops[i][1] == '+'){
                    x++;
                }else{
                    x--;
                }
            }else{
                if(ops[i][0] == '+'){
                    x++;
                }else{
                    x--;
                }
            }
        }
        return x;
    }
};
