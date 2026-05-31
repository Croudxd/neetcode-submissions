class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> m;
        unordered_map<char, int> s1m;
        for ( auto i : s1 ) s1m[i]++;

        int left = 0;
        int right = 0;

        while ( right < s2.size() )
        {

            m[s2[right]]++;
            if ( right - left + 1 < s1.size() )
            {
                right++;
                continue;
            }
            else if (s1m == m) return true;
            m[s2[left]]--;
            if (m[s2[left]] == 0) m.erase(s2[left]);
            left++;
            right++;
        }
        return false;
    }
};
