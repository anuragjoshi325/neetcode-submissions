class Solution {
public:
    bool isPalindrome(string s) {

        int i = 0;
        int j = s.length() - 1;

        while (i < j) {

            // If left character is not a letter/number, skip it
            if (!isalnum(s[i])) {
                i++;
                continue;
            }

            // If right character is not a letter/number, skip it
            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            // Compare both characters
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }

            // Move both pointers
            i++;
            j--;
        }

        return true;
    }
};