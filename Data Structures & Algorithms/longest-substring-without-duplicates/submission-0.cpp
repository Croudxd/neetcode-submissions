class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> m;
        int longest = 0;
        int left = 0;
        int right = 0;

        while ( right < s.size() )
        {
            int x = m.count(s[right]);
            if (x)
            {
                m.erase(s[left]);
                left++;
            }
            else
            {
                m.insert(s[right]);
                longest = max( longest , right - left + 1);
                right++;
            }
        }
        return longest;
    }
};
