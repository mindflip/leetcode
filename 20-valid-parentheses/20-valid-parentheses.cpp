class Solution {
public:
    bool isValid(string s) {
        if(s.length() % 2) return false;
        unordered_map<char, char> p = {{')', '('}, {'}', '{'}, {']', '['}};
        stack<char> st;
        for(int i = 0; i < s.length(); ++i) {
            if(!st.empty() && st.top() == p[s[i]]) {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        
        return st.empty();
    }
};