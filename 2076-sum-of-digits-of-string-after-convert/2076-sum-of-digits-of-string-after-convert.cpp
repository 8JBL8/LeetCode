class Solution {
public:
    int getLucky(string s, int k) {
        map<int,char> con;

        con={{1,'a'},{2,'b'},{3,'c'},{4,'d'},{5,'e'},{6,'f'},{7,'g'},{8,'h'},{9,'i'},{10,'j'},{11,'k'},{12,'l'},{13,'m'},{14,'n'},{15,'o'},{16,'p'},{17,'q'},{18,'r'},{19,'s'},{20,'t'},{21,'u'},{22,'v'},{23,'w'},{24,'x'},{25,'y'},{26,'z'}};

        string ans="";
        for(int i=0; i<s.size(); i++){
            for(auto j = con.begin(); j != con.end(); j++){
                char c=j->second;
                if(s[i]==c){
                    ans+=to_string(j->first);
                }
            }
        }
        
        while(k!=0){
            int w=0;
            for(int j=0; j<ans.size(); j++){
                w=w+ ans[j]-'0';
            }
             ans="";
              ans=to_string(w);
              k--;
        }
        int ff;
        stringstream ss(ans);
        ss>>ff;
        return ff;
    }
};