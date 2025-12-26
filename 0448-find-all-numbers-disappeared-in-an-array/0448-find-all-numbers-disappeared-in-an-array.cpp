class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int s=nums.size();
        vector<int> m(s+1,0);
        vector<int> ans;
        for(int i=0; i<s; i++){
            if(nums[i]){
                int temp=nums[i];
                m[temp]++;
            }
        }
        for(int i=1; i<m.size(); i++){
            if(m[i]==0) ans.push_back(i);
        }
        return ans;
    }
};