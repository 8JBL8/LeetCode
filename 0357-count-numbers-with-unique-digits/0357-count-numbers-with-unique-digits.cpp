class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;

        int ans=10;
        int fact1=9;
        int fact2=9;
        int num=n-1;
        int d=8;

        while(num>0){
            fact1=fact1*fact2;
            ans+=fact1;
            fact2=d;
            d--;
            num--;
        }
        return ans;
    }
};