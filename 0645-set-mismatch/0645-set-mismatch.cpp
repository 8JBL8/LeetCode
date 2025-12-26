class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum=0;
        int s=nums.size();
        vector<int> ans;
        for(int i=0; i<s; i++){
            sum=sum+nums[i];
        }
        int t= (s*(s+1))/2;
        int diff=t-sum;

        sort(nums.begin(), nums.end());
        for(int i=1; i<s; i++){
            if(nums[i]==nums[i-1]){
                int a= nums[i]+diff;
                ans.push_back(nums[i]);
                ans.push_back(a);
            }
        }
        return ans;
    }
};