class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> sub;
        createSubset(nums, 0, res, sub);
        return res;        
    }
    void createSubset(vector<int>& nums, int i, vector<vector<int>>& res, vector<int>& sub) {
        if (i == nums.size()) {
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[i]);
        createSubset(nums, i + 1, res, sub);

        sub.pop_back();
        createSubset(nums, i + 1, res, sub);
    }    
};