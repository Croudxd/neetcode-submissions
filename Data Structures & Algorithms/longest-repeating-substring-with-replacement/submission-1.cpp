class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> m;

        int left = 0;
        int max_f = 0;
        int longest = 0;

        for ( int right = 0; right < s.size(); right++ )
        {
            m[s[right]]++;
            max_f = max(max_f, m[s[right]]);

            while ((right - left + 1) - max_f > k)
            {
                m[s[left]]--;
                left++;
            }
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
