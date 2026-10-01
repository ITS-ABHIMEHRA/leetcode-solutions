class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char ch: s){
            if(ch =='(' || ch=='['|| ch == '{'){
                st.push(ch);
            }
            else if(st.empty() && (ch ==')' || ch==']'|| ch == '}'))return false;
            else{
                if(ch ==')' && st.top()=='(')st.pop();
                else if(ch =='}' && st.top()=='{')st.pop();
                else if(ch ==']' && st.top()=='[')st.pop();
                else break;
            }
        }
        return st.empty();
    }
};