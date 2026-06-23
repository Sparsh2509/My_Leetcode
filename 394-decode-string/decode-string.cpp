class Solution {
public:
    string decodeString(string s) {

        // Stack to store characters and partially decoded strings
        stack<char> st;

        // Traverse each character of the input string
        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            // When a closing bracket is found,
            // decode the substring enclosed by the matching '['
            if (ch == ']') {

                string temp = "";

                // Extract the encoded substring by popping
                // until the opening bracket '[' is found
                while (st.top() != '[') {
                    temp += st.top();
                    st.pop();
                }

                // Remove the '[' from the stack
                st.pop();

                // Extract the repetition count
                // (handles multi-digit numbers as well)
                string num = "";
                while (!st.empty() && st.top() >= '0' && st.top() <= '9') {
                    num += st.top();
                    st.pop();
                }

                // Digits were collected in reverse order,
                // so reverse them before converting to integer
                reverse(num.begin(), num.end());
                int n = stoi(num);

                // Characters of the substring were also collected
                // in reverse order, so restore the original order
                reverse(temp.begin(), temp.end());

                // Repeat the decoded substring n times
                string expanded = "";
                while (n--) {
                    expanded += temp;
                }

                // Push the expanded substring back onto the stack
                // so that it can participate in outer nested expressions
                for (char c : expanded) {
                    st.push(c);
                }
            }
            else {
                // Push normal characters, digits, and '[' onto the stack
                st.push(ch);
            }
        }

        // Construct the final answer from the stack
        string res = "";

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        // Since characters were popped in reverse order,
        // reverse the result to obtain the decoded string
        reverse(res.begin(), res.end());

        return res;
    }
};