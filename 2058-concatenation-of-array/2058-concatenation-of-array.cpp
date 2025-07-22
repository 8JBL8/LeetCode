class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int x= nums.size();
        vector<int> ss;
        for(int i=0; i<x; i++){
            int y=nums[i];
            ss.push_back(y);
        }
        for(int i=0; i<x; i++){
            int y=nums[i];
            ss.push_back(y);
        }
        return ss;
    }
};