class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int freq=nums[i];
            int val= nums[i+1];
            for(int j=freq; j>0; j--){
                ans.push_back(val);
            }
            i++;
        }
        return ans;
    }
};