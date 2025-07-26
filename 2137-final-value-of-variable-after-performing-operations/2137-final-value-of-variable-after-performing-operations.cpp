class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int z=operations.size();
        for(int i=0; i<z; i++){
            if(operations[i]=="++X") ++x;
            else if(operations[i]=="--X") --x;
            else if(operations[i]=="X++") x++;
            else x--;
        }
        return x;
    }
};