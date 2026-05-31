class Solution {
public:
    bool isValid(string s) {
        if (s.size() == 1) return false;
        stack<char> st;
        unordered_map<char, char> m = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };      

        for ( int i = 0; i < s.size(); i++ )
        {
            if ( !m.count(s[i]) )
                st.push(s[i]);
            else if (!st.empty())
            {
                char x = st.top();
                if (m[s[i]] != x) return false;
                st.pop();
            }
            else
                return false;
        }
        return st.empty();
    }
};
