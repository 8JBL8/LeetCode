class Solution {
public:
    bool checkIfPangram(string sentence) {
        sort(sentence.begin(), sentence.end());
        auto d=unique(sentence.begin(), sentence.end());
        sentence.erase(d, sentence.end());
        int z=sentence.size();
        if(z==26) return true;
        else return false;
    }
};