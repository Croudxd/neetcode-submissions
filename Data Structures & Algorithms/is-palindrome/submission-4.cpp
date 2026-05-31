class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 1) return true;
        unordered_set<char> m = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9'};
        for ( int i = {}; i < s.length(); i++)
        {
            if (!m.count(tolower(s[i])))
            {
                s.erase(i, 1);
                i--;
            }
        }
        if (s.empty()) return true;

        size_t lastptr = s.length() - 1;
        size_t firstptr = 0;
        while ( firstptr < lastptr )
        {
            if (tolower(s[firstptr]) != tolower(s[lastptr])) return false;
            lastptr--;
            firstptr++; 
        }
        return true;

    }
};
