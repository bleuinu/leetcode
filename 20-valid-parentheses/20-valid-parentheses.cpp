class Solution {
public:
    bool isValid(string s) {
        if(s.size() & 1 == 1) return false;
        if(s[0] == ')' || s[0] == ']' || s[0] == '}') return false;
        stack<char> stk;
        
        const int SIZE = s.size();
        for(int i=0; i<SIZE; ++i) {
            switch(s[i]) {
                case '[':
                case '{':
                case '(':
                    stk.push(s[i]);
                    break;
                default:
                    if(stk.empty()) return false;
                    if(s[i] == ']' && stk.top() != '[') return false;
                    if(s[i] == '}' && stk.top() != '{') return false;
                    if(s[i] == ')' && stk.top() != '(') return false;
                    stk.pop();
            }
        }
        
        return stk.size() == 0;
    }
};