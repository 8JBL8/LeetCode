class Solution {
public:
    int countSeniors(vector<string>& details) {
        string age="";
        vector<int> ages;
        for(int i=0; i<details.size(); i++){
            age.push_back(details[i][11]);
            age.push_back(details[i][12]);
            int z=stoi(age);
            age="";
            ages.push_back(z);

        }
        int count=0;
        for(int i=0; i<ages.size(); i++){
            if(ages[i]>60) count++;
        }
        return count;
    }
};