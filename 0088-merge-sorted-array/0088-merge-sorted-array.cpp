class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0; i<n; i++){
           int z= nums2[i];
           nums1.push_back(z);
        }
        sort(nums1.begin(),nums1.end());
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]==0 && n!=0) {
                nums1.erase(nums1.begin()+i);
                i--;
                n--;
                }
        }
    }
};