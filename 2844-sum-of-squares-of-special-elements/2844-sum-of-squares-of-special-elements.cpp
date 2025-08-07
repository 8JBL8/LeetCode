class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int size= nums.size();
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(size%(i+1)==0){
                ans= ans +(nums[i]*nums[i]);
            }
        }
        return ans;
    }
};