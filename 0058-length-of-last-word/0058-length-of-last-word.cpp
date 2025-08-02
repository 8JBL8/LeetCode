class Solution {
public:
    int lengthOfLastWord(string s) {
        s.push_back(' ');
        vector<string> words;
        string kk="";

        for(int i=0; i<s.size(); i++){
            if(s[i]!=' '){
                kk.push_back(s[i]);
            }
            else{
                words.push_back(kk);
                kk="";
            }
        }

        for(int i=0; i<words.size(); i++){
            if(words[i].size()==0){
                words.erase(words.begin()+i);
                i--;
            }
        }
        int d=words.size()-1;
        int len=words[d].length();
        return len;
    }
};