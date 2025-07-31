class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
            int x=nums[i];
            x=x*x;
            ans[i]=x;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};