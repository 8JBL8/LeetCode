class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans="";
        int x=word1.size();
        int y=word2.size();
        int z;
        if(x>y) z=x;
        else z=y;

        for(int i=0; i<z; i++){
            if(x!=0){ ans.push_back(word1[i]);   x--;}
            if(y!=0){ ans.push_back(word2[i]);   y--;}
        }
        return ans;
    }
};