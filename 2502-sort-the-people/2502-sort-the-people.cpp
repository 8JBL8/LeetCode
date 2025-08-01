class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> jodi;

        for(int i=0; i<names.size(); i++){
            jodi.push_back({heights[i],names[i]});
        }

        sort(jodi.begin(), jodi.end(),[](const pair<int, string>& a, const pair<int, string>& b){return a.first>b.first;});

        vector<string> ans;
        for(auto& p: jodi){
            ans.push_back(p.second);
        }
        return ans;
    }
};