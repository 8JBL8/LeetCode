class Solution {
public:
    string largestGoodInteger(string num) {
        vector<int> r;
        for(int i=0; i<num.size(); i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                string sub=num.substr(i,3);
                int x=stoi(sub);
                r.push_back(x);
            }
        }
        if(r.empty())return "";
        else{
            auto it= max_element(r.begin(),r.end());
            int y=*it;
            string ans= to_string(y);
            if(ans=="0") return "000";
            else return ans;
        }
    }
};