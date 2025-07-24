class Solution {
public:
    bool checkIfPangram(string sentence) {
        if (sentence.size() == 0)return false;
        unordered_set<char> letters;
        
        for ( char c : sentence){
            if (isalpha(c)){
            
            letters.insert(tolower(c));
            }
        }
        if (letters.size() == 26){
            return true;
        }

        return false;

    }
};