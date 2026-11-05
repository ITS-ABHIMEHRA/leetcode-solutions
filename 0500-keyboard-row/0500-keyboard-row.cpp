class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int>row ={1,2,2,1,0,1,1,1,0,1,1,1,2,2,0,0,0,0,1,0,0,2,0,2,0,2};
        vector<string>res;
        for(string word : words){
            bool can = true;
            int prev = -1;
            for(char ch : word){
                if(prev == -1 || row[tolower(ch)-97] == prev  ){
                    prev = row [tolower(ch)-97];
                }
                else{
                    can =false;
                    break;
                }
            }
            if(can)res.push_back(word);
        }
        return res;
    }
};