class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>map;
        for(auto& i:knowledge) map[i[0]]=i[1];
        bool in =false;
        string str="",key="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                in=true;
                key="";
            }
            else if(s[i]==')'){
                in=false;
                str+= map.count(key) ? map[key]:"?";
            }
            else if(in)key+=s[i];
            else str+=s[i];
        }
        return str;
    }
};