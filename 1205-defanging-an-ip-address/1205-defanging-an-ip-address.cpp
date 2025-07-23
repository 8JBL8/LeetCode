class Solution {
public:
    string defangIPaddr(string address) {
        string j="";
        for(int i=0; i< address.length(); i++){
            if(address[i]=='.') {
             j.append("[.]");
            }
            else j=j+address[i];
        }
        return j;
    }
};