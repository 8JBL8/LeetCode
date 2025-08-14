class Solution {
public:
    int scoreOfString(string s) {
        vector<int> con;

        for(int i=0; i<s.size(); i++){
            int x=int(s[i]);
            con.push_back(x);
        }
        vector<int> ans;

        for(int i=1; i<con.size(); i++){
            int z= abs(con[i-1]-con[i]);
            ans.push_back(z);
        }
        int sum = accumulate(ans.begin(), ans.end(), 0);
        return sum;
    }
};