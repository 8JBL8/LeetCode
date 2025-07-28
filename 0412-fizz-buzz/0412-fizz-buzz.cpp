class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        string s="";
        for(int i=1; i<=n; i++){
            int z= i%3;
            int y= i%5;
            if(i%5==0 && i%3==0) {
                ans.push_back("FizzBuzz");
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }
            else if(i%3==0){
                ans.push_back("Fizz");
            }
            else{
                s+=to_string(i);
                ans.push_back(s);
                s="";
            }
        }
        return ans;

        
    }
};