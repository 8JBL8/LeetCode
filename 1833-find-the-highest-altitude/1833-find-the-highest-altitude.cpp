class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alt;
        alt.push_back(0);
        int sum=0;
        for(int i=0; i<gain.size(); i++){
            sum=sum+gain[i];
            alt.push_back(sum);
        }

        auto find= max_element(alt.begin(),alt.end());
        int max=*find;

        return max;
    }
};