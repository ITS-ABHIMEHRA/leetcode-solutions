class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>v ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string,int>map;
        for(string s: words){
            string g="";
            for(char c:s){
                g+=v[(int)c-'a'];
            }
            map[g]++;
        }
        int count =0;
        for(auto i:map)count++;
        return count;
    }
};