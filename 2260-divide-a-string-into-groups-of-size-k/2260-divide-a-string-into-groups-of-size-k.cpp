class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        while(s.length()%k !=0){
            s.push_back(fill);
        }
        // int z=s.length();
        // z=z/3;

        string ans="";
        vector<string> q;
        for(int i=0; i<s.length(); i+=k){
            int j=k;
            int r=i;
            while(j!=0){
                ans.push_back(s[r]);
                j--;
                r++;
            }
            q.push_back(ans);
            ans="";
        }
        return q;
    }
};