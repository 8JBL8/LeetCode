class Solution {
public:
    bool judgeCircle(string moves) {
        int l=0;
        int r=0;
        int u=0;
        int d=0;
        for(int i=0; i<moves.length(); i++){
            if(moves[i]=='L'){
                l++;
                r--;
            }
            else if(moves[i]=='R'){
                r++;
                l--;
            }
            else if(moves[i]=='U'){
                u++;
                d--;
            }
            else{
                d++;
                u--;
            }
        }
        if(l==0 && r==0 && u==0 && d==0) return true;
        return false;
    }
};