// Time Complexity : O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(int i=0; i<word.length(); i++)
        {
            if(word[i] > 64 && word[i] < 91)
                count++;
        }
        if(count == 0 || count == word.length())
            return true;
        else if(count == 1){
            if(word[0]>64 && word[0]<91)
                return true;
            else 
                return false;
        }
        else
            return false;
    }
};
