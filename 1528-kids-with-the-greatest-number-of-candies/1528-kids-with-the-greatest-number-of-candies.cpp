class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> ans(n,false);
        auto max= max_element(candies.begin(), candies.end());
        int largest= *max;
        for(int i=0; i<candies.size(); i++){
            int compare=candies[i]+extraCandies;
            if(compare>= largest) ans[i]=true;
        }
        return ans;
    }
};