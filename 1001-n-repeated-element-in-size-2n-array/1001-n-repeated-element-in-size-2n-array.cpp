class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int he=nums.size()/2;
        int count=0;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]==nums[i] && count<=he){
                count++;
               ans= nums[i];
                }
            if(nums[i]!=nums[i-1]) count=0;
        }
        return ans;
    }
};