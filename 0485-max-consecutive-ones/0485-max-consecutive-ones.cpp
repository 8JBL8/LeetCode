class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> temp;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0 || i==nums.size()-1){
                temp.push_back(count);
                count=0;
            }
        }
        int max=temp[0];
        for(int i=0; i<temp.size(); i++){
            if(max<=temp[i])  max=temp[i];
        }
        return max;
    }
};