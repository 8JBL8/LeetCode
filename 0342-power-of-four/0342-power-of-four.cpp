class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1) return true;
        if(n<=0) return false;
        float x=n;
        while(x>1){
            x=x/4;
        }
        int q=x;
        while(n>q && q!=0){
            q=q*4;
        }
        
        if(q==n) return true;
        else return false;
    }
};