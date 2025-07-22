class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x= nums.size();
        for(int i=0; i<x; i++){
            int y=nums[i];
            nums.push_back(y);
        }
        return nums;
    }
};