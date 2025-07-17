class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> s;
        int x=0;
        int y=0;
        int size=nums.size();

        for(int i=0; i<size; i++){
            x= nums[i]%2;
            int z=nums[i];
            if(x==0) s.push_back(z);
        }
        for(int i=0; i<size; i++){
            y=nums[i]%2;
            int z=nums[i];
            if(y!=0) s.push_back(z);
        }
        return s;
    }
};