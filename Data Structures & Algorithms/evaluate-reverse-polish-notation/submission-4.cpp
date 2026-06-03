class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        map<string, function<int(int, int)>> ops = {
            {"+", [](int x, int y){ return x + y; }},
            {"-", [](int x, int y){ return x - y; }},
            {"*", [](int x, int y){ return x * y; }},
            {"/", [](int x, int y){ return x / y; }},
        };

        for (auto& i : tokens)
        {
            if (ops.count(i))
            {
                if (st.empty()) return 0;

                int y = st.top(); st.pop();
                int x = st.top(); st.pop();
                int j = ops[i](x, y);
                st.push(j);
            }
            else
            {
                st.push(stoi(i));
            }
        }
        int x = 0;
        if (!st.empty()) x = st.top();

        return x;
    }
};
