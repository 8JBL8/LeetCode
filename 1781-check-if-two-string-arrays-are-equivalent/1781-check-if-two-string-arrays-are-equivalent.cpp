class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string aa="";
        string bb="";
        for(int i=0; i<word1.size(); i++){
            string k=word1[i];
            aa=aa+k;
        }
        for(int i=0; i<word2.size(); i++){
            string k=word2[i];
            bb=bb+k;
        }
        if(aa==bb) return true;
        else return false;
    }
};