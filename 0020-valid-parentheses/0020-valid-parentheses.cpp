class Solution {
public:
    bool isValid(string s) {
        stack<int> stc;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[')
                stc.push(ch);

            else {
                if (stc.empty())
                    return false;

                if (ch == ')' && stc.top() != '(')
                    return false;

                if (ch == '}' && stc.top() != '{')
                    return false;

                if (ch == ']' && stc.top() != '[')
                    return false;

                stc.pop();
            }
        }

        return stc.empty();
    }
};