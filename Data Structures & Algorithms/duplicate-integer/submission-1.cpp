class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> map;
        for (size_t i = {}; i < nums.size(); i++)
        {
            auto s = map.insert(nums[i]);
            if (!s.second) return true;
        }
        return false;
    }
};