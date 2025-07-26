class Solution {
public:
    string makeFancyString(string s) {
        int x=1;
        string k="";
        for(int i=0; i<s.length(); i++){
            k.push_back(s[i]);
            if(s[i]==s[i+1]) ++x;
            if(s[i]!=s[i+1]) x=x/x;
            if(x>2){k.pop_back(); x--;}
        }
        return k;
        // for(int i=0; i<s.size(); i++){
        //     if(s[i]==s[i+1]) ++x;
        //     if(s[i]!=s[i+1]) x=x/x;
        //     if(x>2) {s.erase(s.begin()+i); x--; i--;}
            
        // }
        // return s;
    }
};