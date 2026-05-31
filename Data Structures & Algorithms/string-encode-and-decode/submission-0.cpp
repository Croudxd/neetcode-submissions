class Solution {
public:

    string encode(vector<string>& strs) {
        string fstr;
        for ( string s : strs )
        {
            int size = s.length();
            fstr += to_string(size) + "#" + s;
        }
        return fstr;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string> v;
        while ( i < s.size() )
        {
            int x = s.find("#", i);
            int len = stoi(s.substr(i, x - i));
            v.push_back(s.substr(x + 1, len));
            i = x + 1 + len;
        }
        return v;
    }
};
