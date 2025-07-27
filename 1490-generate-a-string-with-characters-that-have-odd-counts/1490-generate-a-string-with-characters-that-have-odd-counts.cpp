class Solution {
public:
    string generateTheString(int n) {
        string x="";
        if(n==1){ x.push_back('a'); return x;}
        // if(n==2) x="ur";
        if(n%2==0){
            for(int i=0; i<n-1; i++){
                x.push_back('a');
            }
            x.push_back('z');
        }
        else{
            for(int i=0; i<n-2; i++){
                x.push_back('a');
            }
            x.push_back('b');
            x.push_back('c');
        }
        return x;
    }
};