class Solution {
public:
    int countAsterisks(string s) {
       int x=s.length();
       int z=0;
       int y=0;
       for(int i=0; i<x; i++){
        if(s[i]=='|') y++;
        if(y%2==0 && s[i]=='*') z++;
       }
       return z;
    }
};