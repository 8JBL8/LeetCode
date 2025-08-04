class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        text.push_back(' ');
        vector<string> store;
        vector<string> ans;
        string put="";

        for(int i=0; i<text.length(); i++){
            if(text[i]!=' '){
                put+=text[i];
            }
            else{
                store.push_back(put);
                put="";
            }
        }

        for(int i=2; i<store.size(); i++){
            if(store[i-2]==first && store[i-1]==second){
                ans.push_back(store[i]);
            }
        }
        return ans;
    }
};