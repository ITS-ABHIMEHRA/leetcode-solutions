class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            int n = nums[i],summ=0;
            while(n>0){
                summ+=n%10;
                n/=10;
            }
            if(i==summ)return i;
        }
        return -1;
    }
};