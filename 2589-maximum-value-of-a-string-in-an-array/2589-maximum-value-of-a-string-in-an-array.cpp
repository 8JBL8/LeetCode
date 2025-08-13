class Solution {
public:
    int maximumValue(vector<string>& strs) {
        vector<int> val;
        int count=0;
        for(int i=0; i<strs.size(); i++){
            for(int j=0;j<strs[i].length(); j++){
                if(isdigit(strs[i][j])){
                    count++;
                }
            }
            if(count==strs[i].length()){
                        int x=stoi(strs[i]);
                        val.push_back(x);
                        count=0;
                    }
                    else if(count!=strs[i].length()){
                        count=0;
                        int y=strs[i].length();
                        val.push_back(y);
                    }
        }
        auto it= max_element(val.begin(), val.end());
        int z=*it;
        return z;
    }
};