class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int x= coordinates[0]+coordinates[1];
        x=x%2;
        if(x==0) return false;
        else return true;
    }
};