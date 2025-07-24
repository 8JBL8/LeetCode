class Solution {
public:
    string truncateSentence(string s, int k) {
        int size= s.length();
        string ans="";
        for(int i=0; i<size; i++){
            char g=s[i];
            if(g==' ') k--;
            if(k==0) break;
            ans.push_back(g);
        }
        return ans;
    }
};