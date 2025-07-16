class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s= nums.size();
        for(int i=0; i<nums.size(); i++){
            if(i!=nums[i]) return i;
            if(s!=nums[s-1]) return s;
        }
        
        return 0;
    }
};