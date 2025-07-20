class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int x=nums.size();
        vector<int> target;
        for(int i=0; i<nums.size(); i++){
            int y= nums[i];
            int z= index[i];
            
            target.insert(target.begin()+z,y);
        }
        return target;
    }
};