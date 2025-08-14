class Solution {
public:
    string clearDigits(string s) {
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]) && !isdigit(s[i-1])){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i-1);
                i--;
                i--;
            }
        }
        return s;
    }
};