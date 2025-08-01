class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        for(int i=0; i<s.size()/2; i++){
                swap(s[low],s[high]);
                low++;
                high--;
        }
    }
};