class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        if (sentences.size()== 0)return 0;
      
      int words = 0;
        for (string each : sentences){
            int count = 1;
            for ( char c : each ){

            if (c == ' '){
                count++;

            }
        }
        words = max(words,count);
        }
      
        return words;
    }
};