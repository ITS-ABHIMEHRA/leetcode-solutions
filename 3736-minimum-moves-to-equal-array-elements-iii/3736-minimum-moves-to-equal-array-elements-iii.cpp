class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxv =-1,moves=0;
        for(int i:nums)maxv=max(maxv,i);
        for(int i:nums)moves+=maxv-i;
        return moves;
    }
};