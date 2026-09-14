class Solution {
public:
    bool isValid(string str) {

        stack<char> s;

        for (int i = 0; i < str.size(); i++) {

            char ch = str[i];

            // If opening bracket, push it into stack
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            }
            else {

                // If stack is empty, no opening bracket to match
                if (s.empty()) {
                    return false;
                }

                // Get the top opening bracket
                char top = s.top();

                // Check if brackets match
                if ((top == '(' && ch == ')') ||
                    (top == '[' && ch == ']') ||
                    (top == '{' && ch == '}')) {

                    s.pop();
                }
                else {
                    return false;
                }
            }
        }

        // Valid only if no opening brackets are left
        return s.empty();
    }
};