class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int total =0;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                if(!st.empty())st.pop();
                else total+=1;
            }
        }
        return total + st.size();
    }
};