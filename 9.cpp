// no of steps needed to make string valid
#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<char> st;
    string s = "((())(())))(()))";
    int c = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                c++;  // unmatched ')'
            } else {
                st.pop();  // matched
            }
        }
    }

    cout << c + st.size() << endl;  // 🔥 This is what you see on the terminal
    return 0;  // Optional, just signals successful execution
}
