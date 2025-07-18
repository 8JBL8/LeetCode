class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        auto max= max_element(candies.begin(), candies.end());
        int largest= *max;
        for(int i=0; i<candies.size(); i++){
            int compare=candies[i]+extraCandies;
            if(compare>= largest) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};