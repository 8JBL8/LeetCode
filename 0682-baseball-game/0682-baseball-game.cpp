class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> points;
        
        for(int i=0; i<operations.size(); i++){
            if(operations[i]=="+"){
                int size=points.size();
                points.push_back(points[size-1]+points[size-2]);
            }
            else if(operations[i]=="D"){
                int size=points.size();
                points.push_back(points[size-1]*2);
            }
            else if(operations[i]=="C"){
                points.pop_back();
            }
            else{
                points.push_back(stoi(operations[i]));
            }
        }
        int sum=0;
        for(int i=0; i<points.size(); i++){
            sum= sum+points[i];
        }
        return sum;
    }
};