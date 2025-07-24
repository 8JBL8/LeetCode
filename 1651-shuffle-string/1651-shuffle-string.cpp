class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int size=indices.size();
        string ans="";
        map<int,char> map;

        for(int i=0; i<size; i++){
            int z=indices[i];
            char y=s[i];
            map[z]=y;
        }
        for(const auto& pair: map){
            ans+=pair.second;
        }
        return ans;
    }
};