class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> m;
        for ( int i = 0; i < nums.size(); i++ )
        {
            m.insert(nums[i]);
        }
        size_t longest = 0;
        for ( auto n : m )
        {
            if (m.count(n-1)) continue;
            size_t streak = 1;
            while (m.count(n + streak)) streak++;
            longest = max(longest, streak);
        }
        return longest;
    }
};




