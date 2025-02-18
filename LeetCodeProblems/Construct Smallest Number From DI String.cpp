// Problem Link
// https://leetcode.com/problems/construct-smallest-number-from-di-string/


// Source Code

class Solution {
public:
    string smallestNumber(string pattern) {
        int n = pattern.size();
        stack<int> st;
        string res = "";
        
        for (int i = 0; i <= n; i++) {
            st.push(i + 1);  // Push current digit
            
            // Check if it's the last digit or pattern at i is 'I'
            if (i == n || pattern[i] == 'I') {
                // Pop from the stack and add to the result
                while (!st.empty()) {
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }
        return res;
    }
};
