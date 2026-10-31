class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        sort(ranges.begin(),ranges.end());
        unordered_map<int,int>mp;
        for(;left<=right;left++){
            mp[left]=1;
        }
        for(auto range:ranges){
            for (int i = range[0];i<=range[1];i++){
                if(mp[i]==0)continue;
                mp[i]-=1;
            }
        }
        for(auto it :mp){
            if(it.second>0)return false;
        }
        return true;
    }
};