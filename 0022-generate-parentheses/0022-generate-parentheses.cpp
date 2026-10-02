class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0, 0, "", n, res);
        return res;        
    }

private:
    void dfs(int start, int end, string s, int n, vector<string>& res) {
        if (start == end && start + end == n * 2) {
            res.push_back(s);
            return;
        }

        if (start < n) {
            dfs(start + 1, end, s + "(", n, res);
        }

        if (end < start) {
            dfs(start, end + 1, s + ")", n, res);
        }
    }
};