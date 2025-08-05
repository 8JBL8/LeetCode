class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum=0;
        vector<int> total;
        for(int i=0; i<accounts.size(); i++){
            for(int j=0; j<accounts[i].size(); j++){
                sum=sum+accounts[i][j];
            }
            total.push_back(sum);
            sum=0;
        }

        auto find= max_element(total.begin(), total.end());
        int max= *find;
        return max;
    }
};