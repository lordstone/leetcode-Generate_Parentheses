class Solution {
public:

    void genStr(int n, vector<string>& str){
        if(n == 0) return;
        if(n == 1) {
            str.push_back("()");
            return;
        }
        genStr(n-1, str);
        vector<string> output ;
        
        for(int i = 0; i < str.size(); i++){
            output.push_back("(" + str[i] + ")");
            output.push_back("()" + str[i]);
            if(i != str.size() - 1){
                output.push_back(str[i] + "()");
            }
            
        }
        
        str = output;
        //free(output);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> str;
        genStr(n, str);
        return str;
    }
};
