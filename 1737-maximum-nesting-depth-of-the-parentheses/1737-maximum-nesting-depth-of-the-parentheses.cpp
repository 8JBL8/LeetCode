class Solution {
public:
    int maxDepth(string s) {
        int x=0;
        vector<int> ss;
        ss.push_back(0);
        for(int i=0; i<s.length();i++){
            if(s[i]=='(') x++;
            if(s[i]==')') {
                ss.push_back(x);
                x--;
                }
        }
        auto max= max_element(ss.begin(),ss.end());
        int y=*max;
        return y;
    }
};