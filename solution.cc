// Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                myStack.push(s[i]);
            } else if(s[i] == ')') {
                if(myStack.empty() || myStack.top() != '(')
                    return false;
                myStack.pop();
            } else if(s[i] == ']') {
                if(myStack.empty() || myStack.top() != '[')
                    return false;
                myStack.pop();
            } else if(s[i] == '}') {
                if(myStack.empty() || myStack.top() != '{')
                    return false;
                myStack.pop();
            } else {
                return false;
            }
        }
        return myStack.empty() ? true : false;
    }
};
