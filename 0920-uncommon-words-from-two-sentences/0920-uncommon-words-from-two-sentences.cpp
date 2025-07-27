class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        s1.push_back(' ');
        s2.push_back(' ');

        string str1="";

        vector<string> comp1;
        vector<string> comp2;

        for(int i=0; i<s1.length(); i++){
            if(s1[i]!=' ') str1.push_back(s1[i]);
            else {comp1.push_back(str1); str1="";}
        }
        for(int i=0; i<s2.length(); i++){    
            if(s2[i]!=' ') str1.push_back(s2[i]);
            else {comp1.push_back(str1); str1="";}
        }
        sort(comp1.begin(),comp1.end());
    
        for (int i = 0; i < comp1.size(); i++) {
        int count = 0;
        for (int j = 0; j < comp1.size(); j++) {
            if (comp1[i] == comp1[j]) count++;
        }
        if (count == 1)
            comp2.push_back(comp1[i]);
    }

        return comp2;
    }
};