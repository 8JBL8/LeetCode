class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int st=target.size();
        int h=target[st-1];
        int y=0;
        for(int i=1; i<=h; i++){
            if(i==target[y]){
                ans.push_back("Push");
                y++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};