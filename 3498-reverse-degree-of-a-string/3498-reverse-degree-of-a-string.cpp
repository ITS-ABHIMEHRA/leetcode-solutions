class Solution {
public:
    int reverseDegree(string s) {
        int i =1,summ=0;
        for(char &c:s){
            int in = (int)'z' -c+1;
            summ+= i* in;i++;
        }
        return summ;
    }
};