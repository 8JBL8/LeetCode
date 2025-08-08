class Solution {
public:
    string reverseWords(string s) {
        vector<string> ans;
        string k="";
        
        s.push_back(' ');
        for(int i=0; i<s.length(); i++){
            if(s[i]!=' '){
                k.push_back(s[i]);
            }
            else{
            reverse(k.begin(),k.end());
            ans.push_back(k);
            k="";
            }
        }
        for(int i=0; i<ans.size(); i++){
            k=k+ans[i];
            k=k+' ';
        }
        k.pop_back();
        return k;
    }
};