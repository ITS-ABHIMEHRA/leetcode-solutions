class Solution {
public:
    void check(string &s, int start, vector<string>& ans, string t, int count) {
        if(count == 4) {
            if(start == s.length()) {
                t.pop_back(); 
                ans.push_back(t);
            }
            return;
        }
        string temp = "";
        for(int i = start; i < s.length() && i < start + 3; i++) 
        {
            temp += s[i];
            if(temp.length() > 1 && temp[0] == '0') break;
            int val = stoi(temp);
            if(val > 255) break;
            check(s, i + 1, ans, t + temp + ".", count + 1);
        }
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.length() > 12) return {};
        vector<string> ans;
        check(s, 0, ans, "", 0);
        return ans;
    }
};