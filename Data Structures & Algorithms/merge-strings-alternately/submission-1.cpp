class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;  // Stores the merged string

        int i = 0, j = 0;  // Pointers for both strings

        // Merge characters alternately while both strings have characters
        while (i < word1.size() && j < word2.size()) {
            res += word1[i++];  // Add character from word1, then increment i
            res += word2[j++];  // Add character from word2, then increment j
        }

        res += word1.substr(i);  // Add remaining characters of word1
        res += word2.substr(j);  // Add remaining characters of word2

        return res;  // Return the merged string
    }
};