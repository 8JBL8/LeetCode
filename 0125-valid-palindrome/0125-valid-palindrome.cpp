class Solution {
public:
    bool isPalindrome(string s) {
        string ans=""; 
        for(int i=0; i<s.size(); i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                char c=tolower(s[i]);
                ans+=c;
            }
            else continue;
        }
        
        int l=ans.length()/2;
            int low=0;
            int high=ans.length()-1;
            for(int i=0; i<l; i++){
                if(ans[low]!=ans[high]){
                    return false;
                    break;
                }
                else{
                    low++;
                    high--;
                }
            }
        return true;
    }
};